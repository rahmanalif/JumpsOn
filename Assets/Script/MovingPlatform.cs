using System.Collections;
using UnityEngine;

public class MovingPlatform : MonoBehaviour
{

    public float[] speedOptions = { 5, 6, 8, 10};

    public float stopDistance = 0.1f;

    public Color flashColor = Color.red;
    public float flashDuration = 0.5f;

    public GameObject objectToScale; // Reference to the object to be scaled
    public Vector3 targetScale = new Vector3(1.5f, 1.5f, 1f); // The target scale for the object

    private bool isMoving = true;
    private float moveSpeed;
    private Renderer platformRenderer;
    private Color originalColor;

    private void Start()
    {
        moveSpeed = speedOptions[Random.Range(0, speedOptions.Length)];
        platformRenderer = GetComponent<Renderer>();
        originalColor = platformRenderer.material.color;
    }

    private void Update()
    {
        if (isMoving)
        {
            Vector3 currentPosition = transform.position;
            Vector3 targetPosition = new Vector3(0f, currentPosition.y, 0f);
            float distanceToTarget = Vector3.Distance(targetPosition, currentPosition);

            if (distanceToTarget > stopDistance)
            {
                Vector3 moveDirection = (targetPosition - currentPosition).normalized;
                moveDirection.y = 0f;
                transform.position += moveDirection * moveSpeed * Time.deltaTime;
            }
            else
            {
                transform.position = targetPosition;
                isMoving = false;
                StartCoroutine(FlashEffect());
            }
        }
    }

    private IEnumerator FlashEffect()
    {
        isMoving = false;

        Vector3 initialScale = objectToScale.transform.localScale;
        float timer = 0f;

        while (timer < flashDuration)
        {
            platformRenderer.material.color = Color.Lerp(originalColor, flashColor, timer / flashDuration);
            objectToScale.transform.localScale = Vector3.Lerp(initialScale, targetScale, timer / flashDuration);
            yield return null;
            timer += Time.deltaTime;

        }

        platformRenderer.material.color = originalColor;
        objectToScale.transform.localScale = targetScale;
        objectToScale.SetActive(false);

        isMoving = true;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            isMoving = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Enemy"))
        {
            PlayerJump.Instance.GameOver();
        }
    }
}
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public static CameraFollow Instance { get; private set; }

    public Transform player; // Reference to the player's transform
    public Transform ground; // Reference to the ground's transform
    public float followSpeed = 5f; // The speed at which the camera follows the player

    private Camera mainCamera;
    private float initialSize;

    // Set the desired initial position of the camera in the Inspector
    public Vector3 initialCameraPosition = new Vector3(0f, 10f, 0f);

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }

        mainCamera = Camera.main;
        mainCamera.transform.position = initialCameraPosition;
        initialSize = mainCamera.orthographicSize;
    }

    private void Update()
    {
        if (player != null)
        {
            // Calculate the target Y position for the camera to follow the player smoothly
            float targetCameraY = player.position.y;

            // Smoothly move the camera towards the target Y position
            Vector3 targetPosition = mainCamera.transform.position;
            targetPosition.y = Mathf.Lerp(mainCamera.transform.position.y, targetCameraY, followSpeed * Time.deltaTime);
            mainCamera.transform.position = targetPosition;
        }
    }

    // Call this method to trigger the camera zoom-out
    public void ZoomOutUntilTwoTransforms()
    {
        StartCoroutine(ZoomOutCoroutine());
    }

    private System.Collections.IEnumerator ZoomOutCoroutine()
    {
        float startTime = Time.time;
        float duration = 1.0f; // You can adjust the duration of the zoom-out animation here

        float startSize = mainCamera.orthographicSize;
        float targetSize = CalculateTargetSize();

        while (Time.time - startTime < duration)
        {
            float t = (Time.time - startTime) / duration;
            mainCamera.orthographicSize = Mathf.Lerp(startSize, targetSize, t);
            yield return null;
        }
    }

    private float CalculateTargetSize()
    {
        // Calculate the bounds that encapsulate both the player and ground positions
        Bounds bounds = new Bounds(player.position, Vector3.zero);
        bounds.Encapsulate(ground.position);

        // Calculate the size needed to fit both player and ground in the camera's view
        float distance = bounds.size.y / (2f * Mathf.Tan(mainCamera.fieldOfView * 0.5f * Mathf.Deg2Rad));
        float targetSize = distance;

        return targetSize;
    }
}

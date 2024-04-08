using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PlayerJump : MonoBehaviour
{
    [Header("Jump Settings")]
    public float jumpForce = 5f;
    public float fallMultiplier = 2.5f;
    public float lowJumpMultiplier = 2f;
    public LayerMask groundLayer;

    [Header("UI References")]
    public GameObject gameOverUI;
    public GameObject startMenuUI;
    public GameObject inGameUI;
    public GameObject shopUI;
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI highScoreText;
    public AudioSource jumpEffectSound;
    public AudioSource deadEffect;
    public string sceneName = "YourSceneNameHere";
    // Text to show total lifetime coins

    /*[Header("Side check")]
    public Transform sideCheck;
    public float sideCheckRadius;*/

    private Rigidbody rb;
    private bool canJump = false;
    private bool isGameOver = false;
    private int score = 0;
    private int highScore = 0;
    private int coins = 0; // Total coins collected in this game session
    private bool isGrounded = true;
    private Renderer objectRenderer;

    public static PlayerJump Instance { get; private set; }

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        
        if (Instance == null)
        {
            Instance = this;
        }
    }

    private void Start()
    {
        highScore = PlayerPrefs.GetInt("HighScore", 0);
        UpdateHighScoreText();
        UpdateScoreText();
        objectRenderer = GetComponent<Renderer>();
        deadEffect.mute = PlayerPrefs.GetInt("SFXMute", 0) == 1;
        jumpEffectSound.mute = PlayerPrefs.GetInt("SFXMute", 0) == 1;
    }

    private void Update()
    {
        // Allow jumping only if the player is grounded and canJump is true and the game is not over
        if (isGrounded && canJump && !isGameOver && (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began ||
                                                      Input.GetMouseButtonDown(0))) 
        {
            Jump();
        }

        if (rb.velocity.y < 0)
        {
            rb.velocity += Vector3.up * Physics.gravity.y * (fallMultiplier - 1) * Time.deltaTime;
        }
        else if (rb.velocity.y > 0 && !Input.GetMouseButton(0))
        {
            rb.velocity += Vector3.up * Physics.gravity.y * (lowJumpMultiplier - 1) * Time.deltaTime;
        }
    }

    private void Jump()
    {
        if (canJump)
        {
            rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            canJump = false; // Prevent further jumps until the cooldown is over
            score++;
            UpdateScoreText();
            jumpEffectSound.Play();

            // Schedule the method to re-enable jumping after a delay
            Invoke(nameof(EnableJump), 0.5f);
        }

    }

    private void EnableJump()
    {
        canJump = true;
    }


    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isGrounded = true;
            
        }
    }

    public void StartGame()
    {
        startMenuUI.SetActive(false);
        inGameUI.SetActive(true);
        canJump = true;
        ObjectSpawner.Instance.StartSpawningObjects();
        shopUI.SetActive(false);
    }

    public void GameOver()
    {
        isGameOver = true;
        ObjectSpawner.Instance.StopSpawning();
        gameOverUI.SetActive(true);

        if (score > highScore)
        {
            highScore = score;
            PlayerPrefs.SetInt("HighScore", highScore);
            UpdateHighScoreText();
        }

        betterZoomOut();
        deadEffect.Play();
    }

    public void RestartImmediate()
    {
        SceneManager.LoadScene(sceneName);
    }

    private void UpdateScoreText()
    {
        scoreText.text = "" + score;
    }

    private void UpdateHighScoreText()
    {
        highScoreText.text = "High Score: " + highScore;
    }

    private void betterZoomOut()
    {
        if (score > 10)
        {
            CameraFollow.Instance.ZoomOutUntilTwoTransforms();
        }
    }

    public void PlayerShop()
    {
        shopUI.SetActive(true);
        startMenuUI.SetActive(false);
    }

    public void closeShopUI()
    {
        shopUI.SetActive(false);
        startMenuUI.SetActive(true);
    }

   public void ToggleSFX()
    {
        // Toggle the mute state of the audio sources
        deadEffect.mute = !deadEffect.mute;
        jumpEffectSound.mute = !jumpEffectSound.mute;

        // Save the mute state in PlayerPrefs
        PlayerPrefs.SetInt("SFXMute", deadEffect.mute ? 1 : 0);
        PlayerPrefs.SetInt("SFXMute", jumpEffectSound.mute ? 1 : 0);
        PlayerPrefs.Save();
    }
}

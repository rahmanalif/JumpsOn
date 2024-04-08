using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class shopManager : MonoBehaviour
{
    public static shopManager Instance { get; private set; }

    public int currentIndex;
    public int defaultPlayerIndex = 0; // Default index for the player model
    public GameObject[] playerModels;
    public GameObject[] objectPrefabs;
    public ObjectSpawner objectSpawner; // Reference to the ObjectSpawner script

    //public PlayerBluePrint[] cubes;
    //public Button buyButton;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        /*foreach (PlayerBluePrint cube in cubes)
        {
            if (cube.price == 0)
                cube.isUnlocked = true;
            else
                cube.isUnlocked = PlayerPrefs.GetInt(cube.name, 0) == 0 ? false : true;
        }*/

        currentIndex = PlayerPrefs.GetInt("selectedPlayer", 0);
        foreach (GameObject player in playerModels)
            player.SetActive(false);

        playerModels[currentIndex].SetActive(true);
    }

    private void Update()
    {
    }

    public void changeNext()
    {
        playerModels[currentIndex].SetActive(false);

        currentIndex++;
        if (currentIndex == playerModels.Length)
            currentIndex = 0;

        playerModels[currentIndex].SetActive(true);

        /*PlayerBluePrint c = cubes[currentIndex];
        if (!c.isUnlocked)
            return;*/

        PlayerPrefs.SetInt("selectedPlayer", currentIndex);

        // Change the object prefab in the ObjectSpawner script based on the selected player model
        objectSpawner.SetObjectPrefab(objectPrefabs[currentIndex]);
    }

    public void changePrevious()
    {
        playerModels[currentIndex].SetActive(false);

        currentIndex--;
        if (currentIndex < 0)
            currentIndex = playerModels.Length - 1;

        playerModels[currentIndex].SetActive(true);

        /*PlayerBluePrint c = cubes[currentIndex];
        if (!c.isUnlocked)
            return;*/

        PlayerPrefs.SetInt("selectedPlayer", currentIndex);

        // Change the object prefab in the ObjectSpawner script based on the selected player model
        objectSpawner.SetObjectPrefab(objectPrefabs[currentIndex]);
    }

    public void ResetPlayerModel()
    {
        // Deactivate the current player model if it's a valid index
        if (currentIndex >= 0 && currentIndex < playerModels.Length)
        {
            playerModels[currentIndex].SetActive(false);
        }

        currentIndex = defaultPlayerIndex;

        // Activate the new default player model if it's a valid index
        if (currentIndex >= 0 && currentIndex < playerModels.Length)
        {
            playerModels[currentIndex].SetActive(true);
        }

        PlayerPrefs.SetInt("selectedPlayer", currentIndex);

        // Change the object prefab in the ObjectSpawner script based on the selected player model
        objectSpawner.SetObjectPrefab(objectPrefabs[currentIndex]);
    }

    /*public void unlockPlayer()
    {
        PlayerBluePrint c = cubes[currentIndex];

        PlayerPrefs.SetInt(c.name, 1);
        PlayerPrefs.SetInt("selectedPlayer", currentIndex);
        c.isUnlocked = true;
        PlayerPrefs.SetInt("TotalCoins", PlayerPrefs.GetInt("TotalCoins", 0) - c.price);
    }

    private void UpdateUI()
    {
        PlayerBluePrint c = cubes[currentIndex];
        if (c.isUnlocked)
        {
            buyButton.gameObject.SetActive(false);
        }
        else
        {
            buyButton.GetComponentInChildren<TextMeshProUGUI>().text = "Price-" + c.price;
            buyButton.gameObject.SetActive(true);
            if (c.price <= PlayerPrefs.GetInt("TotalCoins", 0))
            {
                buyButton.interactable = true;
            }
            else
            {
                buyButton.interactable = false;
            }
        }
    }*/
}
using System.Collections;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    public static ObjectSpawner Instance { get; private set; }

    // The array of spawn points
    public Transform[] spawnPoints;

    // The total number of objects to spawn
    public int numberOfObjectsToSpawn = 1000;

    // The minimum and maximum delay between spawns
    public float minDelayBetweenSpawns = 0.5f;
    public float maxDelayBetweenSpawns = 2f;

    // The distance to move the spawn points in the y-direction after spawning an object
    public float yMoveDistance = 1f;

    // Delegate for platform stopped moving event
    public delegate void PlatformStoppedMoving();
    public static event PlatformStoppedMoving OnPlatformStoppedMoving;

    private int objectsSpawned = 0;
    private bool isSpawning = false;
    private bool shouldStopSpawning = false;

    // The currently selected object prefab
    public GameObject currentObjectPrefab;

    private Vector3 lastSpawnPosition;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    // Call this method to start spawning objects
    public void StartSpawningObjects()
    {
        if (shouldStopSpawning)
        {
            return;
        }

        if (objectsSpawned < numberOfObjectsToSpawn)
        {
            isSpawning = true;
            Transform spawnPoint = spawnPoints[objectsSpawned % spawnPoints.Length];

            // Add this debug log to check the value of currentObjectPrefab
            Debug.Log("Current Object Prefab: " + currentObjectPrefab);

            // Instantiate the current object prefab instead of objectPrefab
            GameObject newPlatform = Instantiate(shopManager.Instance.objectPrefabs[shopManager.Instance.currentIndex], spawnPoint.position, spawnPoint.rotation);
            objectsSpawned++;

            MoveSpawnPoints();

            lastSpawnPosition = newPlatform.transform.position;
        }

        if (objectsSpawned < numberOfObjectsToSpawn)
        {
            float nextSpawnDelay = Random.Range(minDelayBetweenSpawns, maxDelayBetweenSpawns);
            Invoke(nameof(StartSpawningObjects), nextSpawnDelay);
        }
        else
        {
            isSpawning = false;
        }
    }

    private void MoveSpawnPoints()
    {
        foreach (var spawnPoint in spawnPoints)
        {
            spawnPoint.position += new Vector3(0f, yMoveDistance, 0f);
        }
    }

    public void SpawnObjects()
    {
        if (objectsSpawned < numberOfObjectsToSpawn)
        {
            Transform spawnPoint = spawnPoints[objectsSpawned % spawnPoints.Length];

            GameObject newPlatform = Instantiate(shopManager.Instance.objectPrefabs[shopManager.Instance.currentIndex], lastSpawnPosition + new Vector3(0f, yMoveDistance, 0f), spawnPoint.rotation);

            lastSpawnPosition = newPlatform.transform.position;

            MoveSpawnPoints();

            objectsSpawned++;

            if (OnPlatformStoppedMoving != null)
            {
                OnPlatformStoppedMoving();
            }
        }
    }

    private void Update()
    {
        if (isSpawning)
        {
            return;
        }

        // Handle other logic or input while not spawning
    }

    public void StopSpawning()
    {
        shouldStopSpawning = true;
    }

    // Set the current object prefab based on the selected player model
    public void SetObjectPrefab(GameObject prefab)
    {
        currentObjectPrefab = prefab;
    }
}

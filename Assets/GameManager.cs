using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    public Color color;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    public void whitecolor()
    {
        color = Color.white;
    }

    
}

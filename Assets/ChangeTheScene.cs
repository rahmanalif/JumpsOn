using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeTheScene : MonoBehaviour
{
    public string sceneName = "SceneNameHere";

    public void ThemeChange()
    {
        SceneManager.LoadScene(sceneName);
    }
}

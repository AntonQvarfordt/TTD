using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Docs : MonoBehaviour
{
    [MenuItem("Docs/Open Drive")]
    public static void OpenDrive()
    {
        Application.OpenURL("https://drive.google.com/drive/folders/1mnulm7V6VYtxizzQWFJXozxGpGjwkAa3?usp=sharing");
    }
    [MenuItem("Docs/ToDo")]
    public static void OpenTodo()
    {
        Application.OpenURL("https://trello.com/invite/b/AO8p7Nh9/afd21f6950033212d84cef5bf0e4a8a6/todo");
    }
}

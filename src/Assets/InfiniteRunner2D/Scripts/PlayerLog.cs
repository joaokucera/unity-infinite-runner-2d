using UnityEngine;

public static class PlayerLog
{
    private const string KeyName = "PLAYER_NAME";

    public static void SetName(string name)
    {
        PlayerPrefs.SetString(KeyName, name);
    }

    public static string GetName()
    {
        return PlayerPrefs.GetString(KeyName);
    }
}
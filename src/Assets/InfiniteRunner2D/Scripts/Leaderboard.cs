using System;
using System.Collections;
using UnityEngine;

public static class Leaderboard
{
    private const string WebPage = "http://dreamlo.com/lb/c4IcJ-1b_06syUAfJgLAgQbG9oM2fP7kGehB7pDmLDQA";
    private const string PrivateCode = "c4IcJ-1b_06syUAfJgLAgQbG9oM2fP7kGehB7pDmLDQA";
    private const string PublicCode = "5a943c7039992d09e4eca82b";
    private const string WebUrl = "http://dreamlo.com/lb/";

    public delegate void AfterDownloadHighscore(Highscore[] highscoreArray);

    public static IEnumerator UploadHighscore(string username, int score)
    {
        var www = new WWW(string.Format("{0}{1}/add/{2}/{3}", WebUrl, PrivateCode, WWW.EscapeURL(username), score));
        yield return www;

        if (!string.IsNullOrEmpty(www.error)) {
            Debug.LogWarningFormat("Error uploading: {0}", www.error);
        }
    }

    public static IEnumerator DownloadHighscore(AfterDownloadHighscore onAfterDownloadHighscore)
    {
        WWW www = new WWW(string.Format("{0}{1}/pipe/", WebUrl, PublicCode));
        yield return www;

        if (string.IsNullOrEmpty(www.error)) {
            Debug.LogFormat("Success download: {0}", www.text);

            Highscore[] highscoreArray = FormatHighscore(www.text);
            onAfterDownloadHighscore(highscoreArray);
        }
        else {
            Debug.LogWarningFormat("Error download: {0}", www.error);
        }
    }

    private static Highscore[] FormatHighscore(string textStream)
    {
        string[] entries = textStream.Split(new char[] { '\n' }, StringSplitOptions.RemoveEmptyEntries);
        Highscore[] highscoreArray = new Highscore[entries.Length];

        for (int i = 0; i < entries.Length; i++) {
            string[] entryInfo = entries[i].Split(new char[] { '|' }, StringSplitOptions.RemoveEmptyEntries);

            string username = entryInfo[0];
            int score = int.Parse(entryInfo[1]);
            DateTime date = DateTime.Parse(entryInfo[3]);

            highscoreArray[i] = new Highscore(username, score, date);
        }

        return highscoreArray;
    }
}
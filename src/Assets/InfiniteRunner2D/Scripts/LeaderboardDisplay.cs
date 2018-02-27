using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class LeaderboardDisplay : MonoBehaviour
{
    [SerializeField]
    private Text _leaderboardText;

    private void Start()
    {
        _leaderboardText.text = "...loading...";

        StartCoroutine(Leaderboard.DownloadHighscore(OnHighscoresDownloaded));
    }

    private void OnHighscoresDownloaded(Highscore[] highscoreArray)
    {
        highscoreArray = highscoreArray.OrderByDescending(o => o.Score).ToArray();

        var builder = new StringBuilder();

        for (int i = 0; i < highscoreArray.Length; i++) {
            builder.AppendFormat("{0}. {1}\n", (i + 1), highscoreArray[i].Text);
        }

        _leaderboardText.text = builder.ToString();
    }
}
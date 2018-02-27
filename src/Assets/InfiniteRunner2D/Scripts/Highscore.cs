using System;

public class Highscore
{
    private string _username;
    private int _score;
    private DateTime _date;

    public int Score {
        get {
            return _score;
        }
    }

    public string Text {
        get {
            return string.Format("({0:d}) player: <color=#204080FF>{1}</color> | score: <color=#204080FF>{2}</color>", _date, _username, _score);
        }
    }

    public Highscore(string username, int score, DateTime date)
    {
        this._username = username;
        this._score = score;
        this._date = date;
    }
}
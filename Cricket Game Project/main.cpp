#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>
#include <ctime>
using namespace std;

class Player
{
private:
    string name;
    string role;
    int runs;
    int balls_faced;
    bool is_out;

public:
    Player()
    {
        name = "";
        role = "";
        runs = 0;
        balls_faced = 0;
        is_out = 0;
    }
    Player(string n, string r)
    {
        name = n;
        role = r;
        runs = 0;
        balls_faced = 0;
        is_out = 0;
    }
    void setName(string n)
    {
        name = n;
    }
    string getNAme()
    {
        return name;
    }
    void setRole(string r)
    {
        role = r;
    }
    string getRole()
    {
        return role;
    }
    void setRuns(int r)
    {
        runs = r;
    }
    int getRuns()
    {
        return runs;
    }
    void setBallsFaced(int b)
    {
        balls_faced = b;
    }
    int getBallsFaced()
    {
        return balls_faced;
    }
    void setIs_Out(bool i)
    {
        is_out = i;
    }
    bool getIs_Out()
    {
        return is_out;
    }
    void addRuns(int runs)
    {
        this->runs += runs;
        balls_faced++;
    }
    void get_out()
    {
        is_out = true;
    }
    void print_players_details()
    {
        cout << "Player: " << name << ", Role: " << role << ", Runs: " << runs << ", Balls: " << balls_faced << ", Status: ";
        cout << (is_out ? "Out" : "Not Out") << endl;
    }
};
class Team
{
private:
    int total_scores;
    int wickets_loss;

public:
    bool wide_ball = false;
    vector<Player> players;
    Team()
    {
        players = {};
        total_scores = 0;
        wickets_loss = 0;
    }
    int getWicket_Loss()
    {
        return wickets_loss;
    }
    int getTotal_Scores()
    {
        return total_scores;
    }
    void addPlayer(Player &p)
    {
        players.push_back(p);
    }
    void play_ball(Player &batsman)
    {
        if (batsman.getIs_Out())
        {
            return;
        }

        int outcome = rand() % 10;
        if (outcome == 7 || outcome == 8)
        {
            cout << batsman.getNAme() << " Is Out!" << endl;
            batsman.get_out();
            wickets_loss++;
        }
        else if (outcome == 9)
        {
            wide_ball = true;
            total_scores += 1;
        }
        else
        {
            cout << batsman.getNAme() << " Scored " << outcome << " Runs." << endl;
            batsman.addRuns(outcome);
            total_scores += outcome;
        }
    }

    void print_team_stats()
    {
        for (auto &player : players)
        {
            player.print_players_details();
        }
        cout << "Total Scores : " << total_scores << endl;
        cout << "Wickets Lost : " << wickets_loss << endl;
    }
};

class Match
{
    int overs;

public:
    Match()
    {
        overs = 0;
    }
    Match(int o)
    {
        overs = o;
    }
    void setOvers(int o)
    {
        overs = o;
    }
    int getOvers()
    {
        return overs;
    }
    int toss()
    {
        int t = (rand() % 2) + 1;
        if (t == 1)
        {
            cout << "Team 1 Bats First." << endl;
            return t;
        }
        else
        {
            cout << "Team 2 Bats First." << endl;
            return t;
        }
    }

    void play_innings(Team &batting_team)
    {
        int current_batsman = 0;

        for (int i = 0; i < overs; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (batting_team.getWicket_Loss() == 10)
                {
                    cout << "All Players Are Out. Ending Of Inning!" << endl;
                    return;
                }

                batting_team.play_ball(batting_team.players[current_batsman]);

                if (batting_team.players[current_batsman].getIs_Out())
                {
                    current_batsman++;
                }
                if (batting_team.wide_ball)
                {
                    cout << "Wide Ball" << endl;
                    batting_team.wide_ball = false;
                    j--;
                }

                cout << "Press Any Key To bowl Next Ball." << endl;
                getch();
            }
            cout << "Over " << i + 1 << " completed." << endl;
        }
    }
    void decide_winner(Team &team1, Team &team2)
    {
        if (team1.getTotal_Scores() > team2.getTotal_Scores())
        {
            cout << "Team 1 Wins!" << endl;
        }
        else if (team2.getTotal_Scores() > team1.getTotal_Scores())
        {
            cout << "Team 2 Wins!" << endl;
        }
        else
        {
            cout << "Match Tied!" << endl;
        }
    }
};
int main()
{
    srand(time(0));

    Team team1;

    Player p1t1("Aslam", "Batsman");
    team1.addPlayer(p1t1);
    Player p2t1("Atta", "Batsman");
    team1.addPlayer(p2t1);
    Player p3t1("Babar", "Batsman");
    team1.addPlayer(p3t1);
    Player p4t1("Haseeb", "Batsman");
    team1.addPlayer(p4t1);
    Player p5t1("Aamir", "All-Rounder");
    team1.addPlayer(p5t1);
    Player p6t1("Saqib", "All-Rounder");
    team1.addPlayer(p6t1);
    Player p7t1("Hafeez", "All-Rounder");
    team1.addPlayer(p7t1);
    Player p8t1("Zubair", "Spinner");
    team1.addPlayer(p8t1);
    Player p9t1("Shaheen", "Fast");
    team1.addPlayer(p9t1);
    Player p10t1("Dastageer", "Fast");
    team1.addPlayer(p10t1);
    Player p11t1("Naseem", "Fast");
    team1.addPlayer(p11t1);

    Team team2;

    Player p1t2("Virat", "Batsman");
    team2.addPlayer(p1t2);
    Player p2t2("Rohit", "Batsman");
    team2.addPlayer(p2t2);
    Player p3t2("Jaiswal", "Batsman");
    team2.addPlayer(p3t2);
    Player p4t2("Gill", "Batsman");
    team2.addPlayer(p4t2);
    Player p5t2("Hardik", "All-Rounder");
    team2.addPlayer(p5t2);
    Player p6t2("Jadeja", "All-Rounder");
    team2.addPlayer(p6t2);
    Player p7t2("Dhoni", "All-Rounder");
    team2.addPlayer(p7t2);
    Player p8t2("Ashwin", "Spinner");
    team2.addPlayer(p8t2);
    Player p9t2("Shami", "Fast");
    team2.addPlayer(p9t2);
    Player p10t2("Bumrah", "Fast");
    team2.addPlayer(p10t2);
    Player p11t2("Seeraj", "Fast");
    team2.addPlayer(p11t2);

    int overs;
    cout << "How Many Overs Match?";
    cin >> overs;

    Match match1(overs);

    int toss = match1.toss();
    if (toss == 1)
    {
        cout << "Team 1 Batting : " << endl;
        match1.play_innings(team1);
        cout<<"Team 1 Stats : "<<endl;
        team1.print_team_stats();
        cout << "Now Team 2 Batting : " << endl;
        match1.play_innings(team2);
        cout<<"Team 2 Stats : "<<endl;
        team2.print_team_stats();
    }
    else
    {
        cout << "Team 2 Batting : " << endl;
        match1.play_innings(team2);
        cout<<"Team 2 Stats : "<<endl;
        team2.print_team_stats();
        cout << "Now Team 1 Batting : " << endl;
        match1.play_innings(team1);
        cout<<"Team 1 Stats : "<<endl;
        team1.print_team_stats();
    }

    match1.decide_winner(team1, team2);

    // team1.print_team_stats();
    // team2.print_team_stats();

    return 0;
}
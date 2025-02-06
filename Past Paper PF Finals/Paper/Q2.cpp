using namespace std;
#include <iostream>
#include <conio.h>
#include <string.h>

struct player {
    char player_name[20];
    int arid_no;
    char player_role[20];
};

struct team {
    char team_name[20];
    int teamID;
    char team_dpt[20];
    player p[3];        
};

void inputTeamData(team t[])
{
    //team information
    for (int i = 0; i < 2; i++)
    {   
        cout << "\t TEAM " << i+1 << endl;
        cout << "Enter team name : ";
        cin >> t[i].team_name;
        cout << "Enter team ID : ";
        cin >> t[i].teamID;
        cout << "Enter team department : ";
        cin >> t[i].team_dpt;

        //player information
        for (int j = 0; j < 3; j++)
        {   
            cout <<"\t Player " << j+1 << endl;
            cout << "Enter player name : ";
            cin >> t[i].p[j].player_name;
            cout << "Enter player's arid no : ";
            cin >> t[i].p[j].arid_no;
            cout << "Enter player role : ";
            cin >> t[i].p[j].player_role;
        }

        cout << endl;
    }


}

void showPlayerData(team t[])
{
    for (int i = 0; i < 2; i++)
    {   
        cout << "Name \t Arid No. \t Player Role" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << t[i].p[j].player_name << "\t\t" << t[i].p[j].arid_no << "\t\t" << t[i].p[j].player_role << endl; 
        }
        cout << endl;
    }
}

void searchPlayer(team t[])
{
    char name[20];
    cout << "Enter the name of the player you want to search : ";
    cin >> name;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (name == t[i].p[j].player_name)
            {
                cout << t[i].p[j].player_name << "\t\t" << t[i].p[j].arid_no << "\t\t" << t[i].p[j].player_role << endl;
                cout << t[i].team_name <<"\t\t" << t[i].teamID << "\t\t" << t[i].team_dpt << endl;
            }
            else
            {
                cout << "Record Not Found!" << endl;
            }
        }
        cout << endl;
    }
}

int main()
{
    team t[2];

    inputTeamData(t);
    showPlayerData(t);
    searchPlayer(t);
}
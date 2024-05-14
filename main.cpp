#include "a.h"
#include <bits/stdc++.h>
using namespace std;




void StartGame()
{
    char ch;
    for(int i=1;i<=100;i++)
        cout<<"\n";
    cout<<"Enter any key to start game\n";
    cin>>ch;
    for(int i=1;i<=100;i++)
        cout<<"\n";
}

int Assasin::enemycount;
int Slaver::enemycount;
int Bruiser::enemycount;
int Rammer::enemycount;
int Cultist::enemycount;
vector<string> Data::CardName;
vector<string> Data::CardDesc;
vector<int> Data::CardCost;

int main()
{


    srand(time(NULL));
    int stage=1;
    Data d;
    d.ReadData();
    Player p;
    PotionBelt pot;
    StartGame();
    while(Combat(p,stage,pot))
    {
        if(stage%3==0)
            Bonus(p);
        stage++;
    }

    return 0;
}

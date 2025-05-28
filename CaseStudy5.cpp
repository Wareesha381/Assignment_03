#include<iostream>
using namespace std;
void inputData();
void totalscore();
void winners();
void lowscoringTeams();

int Quiz[6][4];
int teams=6;
int rounds=4;

int main()
{
    inputData();
    totalscore();
    winners();
    lowscoringTeams();
    return 0;
}

void inputData()
{
       for(int i=0;i<teams;i++)
       {
        for(int j=0;j<rounds;j++)
        {
            cout<<"Enter score for Team "<<i+1<<", Round "<< j+1<<": ";
            cin>>Quiz[i][j];
        }
        cout<<" -----------------------------------------------------------"<<endl;
       }
}

void totalscore()
{
       int totalscore;

        for(int i=0;i<teams;i++)
       {
        totalscore=0;

        for(int j=0;j<rounds;j++)
        {
            totalscore+=Quiz[i][j];
        }
        cout<<"Total score for Team"<<i+1<<": "<<totalscore<<endl;
    }
}

void winners()
{
    int winner=Quiz[0][0];
    int round_up=Quiz[0][0];
    int winnerloc=0;
    int round_uploc=0;
    int teamtotal[6]={};

     for(int i=0;i<teams;i++)
       {
         
        for(int j=0;j<rounds;j++)
        {
           teamtotal[i]+=Quiz[i][j];
        }
    }

    for(int i=0;i<teams;i++)
    {
        if(teamtotal[i]>winner)
        {
          round_up=winner;
                winner=teamtotal[i];
                winnerloc=i+1;
        }
        else
        {
            if(teamtotal[i]>round_up&&teamtotal[i]!=winner)
            {
                     round_up=teamtotal[i];
                     round_uploc=i+1;

            }
            
        }
    }
        cout<<" Winner: Team "<<winnerloc<<endl;
        cout<<"Round-up: Team "<<round_uploc<<endl;
    
            
}

void lowscoringTeams()
{
    int teamtotal;
    cout<<"Teams that failed to score above 10 in any round: "<<endl;
         for(int i=0;i<teams;i++)
    {
         teamtotal=0;
         
        for(int j=0;j<rounds;j++)
        {
           teamtotal+=Quiz[i][j];
        }
        if(teamtotal<=10)
        {
            cout<<"Team: "<<i+1<<endl;
        }
    }

}
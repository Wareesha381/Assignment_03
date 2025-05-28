#include<iostream>
using namespace std;
void inputVotes();
void VotesperCandidate();
void VotesperPolling();
void winner();
void turnouts();

int votesPolling[6][4];
int rows=6;
int columns=4;

int main()
{
        inputVotes();
        VotesperCandidate();
        VotesperPolling();
        winner();
        turnouts();
        return 0;
}

void inputVotes()
{
   cout<<"Enter votes for 4 candidates from 6 polling stations: "<<endl;

   for(int i=0;i<rows;i++)
   {
    cout<<"Polling Station "<<i+1<<" :";
    for(int j=0;j<columns;j++)
    {
        cin>>votesPolling[i][j];
    }
    cout<<endl;
   }

}

void VotesperCandidate()
{
    cout<<endl<<"--- Total Votes Per Candidate ---"<<endl;
    int candidatevotesum;
    for(int j=0;j<columns;j++)
    {
        candidatevotesum=0;

        for(int i=0;i<rows;i++)
        {
          candidatevotesum+=votesPolling[i][j];
        }
         cout<<"Candidate "<<j+1<<" :"<<candidatevotesum;
        cout<<endl;
    }

}


void VotesperPolling()
{
    cout<<endl<<"--- Total Votes Per Polling---"<<endl;
    int pollingvotesum;
    

        for(int i=0;i<rows;i++)
        {       
             pollingvotesum=0;

            for(int j=0;j<columns;j++)
       {
          pollingvotesum+=votesPolling[i][j];
        }
         cout<<"Station"<<i+1<<" :"<<pollingvotesum;
        cout<<endl;
    }
}

void winner()
{
   cout<<endl<<" --- Winner(s) ---"<<endl;

      int candidatevotesum;
    int winner=0;
    int winnerlocation;
    for(int j=0;j<columns;j++)
    {
        candidatevotesum=0;

        for(int i=0;i<rows;i++)
        {
          candidatevotesum+=votesPolling[i][j];
        }
        if(candidatevotesum>winner)
        {
            winner=candidatevotesum;
            winnerlocation=j+1;
        }
    }
     cout<<"Candidate "<<winnerlocation<<" :"<<winner<<" votes";

}

void turnouts()
{
    cout<<endl<<"--- Stations with Turnout Less Than 100 ---"<<endl;
      int pollingvotesum;
    

        for(int i=0;i<rows;i++)
        {       
            pollingvotesum=0;

            for(int j=0;j<columns;j++)
            {
          pollingvotesum+=votesPolling[i][j];
            }
             if(pollingvotesum<100)
            {
                cout<<"Station "<<i+1<<endl;
            }
        cout<<endl;
    }
    
}
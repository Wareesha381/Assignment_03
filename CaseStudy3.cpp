#include<iostream>
using namespace std;

void inputData();
void patientSategoury();
void CirticalConditionDays();

char patientsrecord[5][7];
int patients=5;
int days=7;


int main()
{
        inputData();
        patientSategoury();
        CirticalConditionDays();

    return 0;


}

void inputData()
{
     for(int i=0;i<patients;i++)
     {
        for(int j=0;j<days;j++)
        {
            cout<<"Enter Condition of Patient "<<i+1<<" for day "<<j+1<<": "<<endl;
            cin>>patientsrecord[i][j];
        }
        cout<<"------------------------------------------------"<<endl;
     }
}

void patientSategoury()
{
    
    for(int i=0;i<patients;i++)
    {
        int stableStateCounter=0;
int criticalStateCounter=0;
int recoveredStateCounter=0;

        for(int j=0;j<days;j++)
        {
              if(patientsrecord[i][j]=='S'||patientsrecord[i][j]=='s')
            {
                stableStateCounter++;
            }
              else if(patientsrecord[i][j]=='C'||patientsrecord[i][j]=='c')
            {
                criticalStateCounter++;
            
            }
              else if(patientsrecord[i][j]=='R'||patientsrecord[i][j]=='r')
            {
                recoveredStateCounter++;
            }
        }
    cout<<endl<<"Condition of Patient"<<i+1<<": "<<endl<<endl;
    cout<<"Patient in Critical Sitution is for "<<criticalStateCounter<<"times"<<endl;
    cout<<"Patient in Stable Sitution is for "<<stableStateCounter<<"times"<<endl;
    cout<<"Patient in Recovery Sitution is for "<<recoveredStateCounter<<"times"<<endl;
    }
   
}

void CirticalConditionDays()
{
    int criticalDays;

        for(int i=0;i<patients;i++)
        {
            criticalDays=0;
            for(int j=0;j<days;j++)
            {
                if(patientsrecord[i][j]=='C'||patientsrecord[i][j]=='c')
                {
                    criticalDays++;
                }
            }
            cout<<endl<<endl;
            cout<<"Patient "<<i+1<<" remains in Critical Condition for"<<criticalDays <<" times"<<endl;
         }
}

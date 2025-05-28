#include<iostream>
using namespace std;
void inputData();
void averagedefeatpershift();
void averagedefeatperday();
void criticalShifts();


float factoryAnalysis[3][7];
int rows=3;
int columns=7;

int main()
{
     inputData();
     averagedefeatpershift(); 
     averagedefeatperday();
     criticalShifts();
   return 0;
}

void inputData()
{

    cout<<"Enter defect percentages (Shift x Day): "<<endl;

    for(int i=0;i<rows;i++)
    {
       cout<<" Shift "<<i+1<<" (Day 1 to 7): ";
        for(int j=0;j<columns;j++)
        {
            cin>> factoryAnalysis[i][j];
        }
        cout<<endl;
    }
}

void averagedefeatpershift()
{
    float shiftsum;
    float shiftaverage;
    cout<<endl<<"--- Average Defect Percentage Per Shift --- "<<endl;
     for(int i=0;i<rows;i++)
    {
        shiftsum=0;
        shiftaverage=0;
        for(int j=0;j<columns;j++)
        {
            shiftsum+=factoryAnalysis[i][j];
        }
        shiftaverage=shiftsum/columns;
        cout<<"Shift "<<i+1<<": "<<shiftaverage<<"%";
        cout<<endl;
    }
}

void averagedefeatperday()
{
    float shiftsum;
    float shiftaverage;
    cout<<endl<<"--- Average Defect Percentage Per Day --- "<<endl;
    
        shiftsum=0;
        shiftaverage=0;
        for(int j=0;j<columns;j++)
        {
             for(int i=0;i<rows;i++)
            {      
            shiftsum+=factoryAnalysis[i][j];
            }
        shiftaverage=shiftsum/columns;
        cout<<"Day "<<j+1<<": "<<shiftaverage<<"%";
        cout<<endl;
    }
}

void criticalShifts()
{
cout<<endl<<"--- Critical Shifts (Avg Defects > 10%) ---"<<endl;
    float shiftsum;
    float shiftaverage; 

     for(int i=0;i<rows;i++)
    {
        shiftsum=0;
        shiftaverage=0;
        for(int j=0;j<columns;j++)
        {
            shiftsum+=factoryAnalysis[i][j];
        }
        shiftaverage=shiftsum/columns;
        if(shiftaverage>10)
        {
        cout<<"Shift "<<i+1<<" (Avg: "<<shiftaverage<<"%)";
        cout<<endl;

        }
    }
}
#include<iostream>
using namespace std;

void inputRecord();
void AverageTemperature();
void weatherdetection();

float temperature[5][5];
int zone=5;
int location=5;

int main()
{
    inputRecord();
    AverageTemperature();
    weatherdetection();
    return 0;
}

void inputRecord()
{
    for(int i=0;i<zone;i++)
    {
        for(int j=0;j<location;j++)
        {
           cout<<"Enter temperature for Zone "<<i+1<<", Location "<<j+1<<": ";
           cin>>temperature[i][j];
        }
        cout<<"--------------------------------------------------------------"<<endl;
    }
}

void AverageTemperature()
{
    float average;
    float sum;

    for(int i=0;i<zone;i++)
    {
        average=0;
        sum=0;
        for(int j=0;j<location;j++)
        {
            sum+=temperature[i][j];
        }
         average=sum/5.00;
         cout<<"Average temperature for Zone " << i + 1 << ": " << average << " °C" << endl;
    }
}

void weatherdetection()
{
   float highweather=temperature[0][0];
     float   lowweather=temperature[0][0];

      int  zonehigh=0, zonelow=0;
       int locationhigh=0,locationlow=0;

    for(int i=0;i<zone;i++)
    {
        for(int j=0;j<location;j++)
        {
        if(temperature[i][j]>highweather)
        {
            highweather=temperature[i][j];
            zonehigh=i;
            locationhigh=j;
        }
        else if(temperature[i][j]<lowweather)
        {
            lowweather=temperature[i][j];
            zonelow=i;
            locationlow=j;
        }
        }
    }
    
    cout<<" Extreme Hot Spot Detected at Zone "<<zonehigh<<" Location "<<location<<": "<<highweather<<"°C"<<endl;
    cout<<" Extreme Cold Spot Detected at Zone "<<zonelow<<", Location"<<locationlow<<": "<<lowweather<<"°C"<<endl;

}

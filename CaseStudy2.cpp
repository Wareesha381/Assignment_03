#include<iostream>
using namespace std;
void inputdata();
void totalSalesPerItem();
void totalSalesPerDay();
void dayWithHighestSales();
void mostSoldItem();

float resurantrecord[4][7];
int items=4;
int days=7;

int main()
{
    float resurantrecord[4][7];
    inputdata();
    totalSalesPerItem();
    totalSalesPerDay();
    dayWithHighestSales();
    mostSoldItem();
return 0;
}

void inputdata()
{
    for(int i=0;i<items;i++)
    {
        for(int j=0;j<days;j++)
        {
            cout<<"Enter sold items "<<i+1<<" for day "<<j+1<<": "<<endl;
            cin>>resurantrecord[i][j];
        }
    }
}

void totalSalesPerItem()
{
    int total;

            for(int i=0;i<items;i++)
            {
                total=0;
                for(int j=0;j<days;j++)
                {
                   total+=resurantrecord[i][j];
                }
                cout<<"Total sales for Item "<<i+1<<": "<<total<<endl;
            }
}

void totalSalesPerDay()
{
    int total;
    for(int i=0;i<items;i++)
    {
        total=0;
        for(int j=0;j<days;j++)
        {
             total+=resurantrecord[i][j];
        }
        cout<<"Total sales for Day "<<i+1<<": "<<total<<endl;
    }
}

void dayWithHighestSales()
{
    int maxDay=0;
    float maxTotal=0;
    int total;
    for(int i=0;i<days;i++)
    {
        total=0;

        for(int j=0;j<items;j++)
        {
             total+=resurantrecord[i][j];
        }
        if(total>maxTotal)
        {
            maxTotal=total;
            maxDay=i;

        }
    }
        cout << "Day " << maxDay + 1 << " had the highest total sales: " << maxTotal << endl;
}

void mostSoldItem()
{
           int maxItem=0;
    float maxTotal=0;
    int total;
    for(int i=0;i<items;i++)
    {
        total=0;

        for(int j=0;j<days;j++)
        {
             total+=resurantrecord[i][j];
        }
        if(total>maxTotal)
        {
            maxTotal=total;
            maxItem=i;

        }
    }
    cout << "Item " << maxItem + 1 << " was sold the most overall: " << maxTotal << endl;
}
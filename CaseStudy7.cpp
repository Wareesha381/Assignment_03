#include<iostream>
using namespace std;
void inputRating();
void averageRatingperProduct();
void countPerfectRating();
void productwithWorstRating();

const int rows=10;
const int columns=5;
int rating[rows][columns];


int main()
{
    inputRating();
    averageRatingperProduct();
    countPerfectRating();
    productwithWorstRating();

    return 0;
}

void inputRating()
{
    cout<<"Enter ratings (1-5) for 5 products by 10 users: "<<endl;

    for(int i=0;i<rows;i++)
    {
         cout<<"User "<<i+1<<": ";

        for(int j=0;j<columns;j++)
        {
            cin>>rating[i][j];
        }
    }
}

void averageRatingperProduct()
{
    float perproductsum;
    float perproductavg;
    int counter;

    cout<<endl<<"--- Average Ratings ---"<<endl;

    for(int j=0;j<columns;j++)
        {    
            perproductsum=0;
            perproductavg=0;
            counter=0;

           for(int i=0;i<rows;i++)
           {
             perproductsum+=rating[i][j];
             counter++;
           }

        perproductavg=perproductsum/counter;

        cout<<"Product "<<j+1<<": "<<perproductavg;
        cout<<endl;

    }

}

void countPerfectRating()
{
    int perfectrating;

    cout<<endl<<"--- Perfect Ratings Count (5 stars) ---"<<endl;
     
    for(int j=0;j<columns;j++)
    {    
           perfectrating=0;
        
        for(int i=0;i<rows;i++)
       {
            if(rating[i][j]==5)
            {
                perfectrating++;
            } 
       }
        cout<<"Product "<<j+1<<": "<<perfectrating;
        cout<<endl;

    }
}

void productwithWorstRating()
{
    float worstrating=6.00;
    float worstratingsum;
    float worstratingavg;
    int counter;
    int location=0;
    cout<<endl<<"--- Product(s) with Worst Average Rating ---"<<endl;

    for(int j=0;j<columns;j++)
    {    
        worstratingsum=0;
        worstratingavg=0;
        counter=0;
        
        for(int i=0;i<rows;i++)
        {
            worstratingsum+=rating[i][j];
            counter++;
        } 
        worstratingavg=worstratingsum/counter;

        if(worstratingavg<worstrating)
        {
            worstrating=worstratingavg;
            location=j+1;
        }
    }
    cout<<"Product "<<location<<" (Avg: "<<worstratingavg<<")";
        cout<<endl; 
}
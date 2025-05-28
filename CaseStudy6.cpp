#include<iostream>
using namespace std;
void inputSeats();
void BookingSeats();
void availableSeats();
void maxEmptySeatsRow();

const int rows=6;
const int column=4;
char seats[rows][column];
int bookRow;
int bookColumn;

int main()
{
    inputSeats();
    BookingSeats();
    availableSeats();
    maxEmptySeatsRow();

    return 0;
}

void inputSeats()
{
    for(int i=0;i<rows;i++)
    {            
        cout<<"Enter Row "<<i+1<<": ";

        for(int j=0;j<column;j++)
        {
            cin>>seats[i][j];
        }
        cout<<endl;
    }

    cout<<"Initial Seating Chart: "<<endl;

    for(int i=0;i<rows;i++)
    {
        cout<<"Row "<<i+1<<": ";
        for(int j=0;j<column;j++)
        {
               cout<<seats[i][j]<<"\t";
        }
           cout<<endl;
    }
}


void BookingSeats()
{
    cout<<endl;
    cout<<"Enter Row (1-6): ";
    cin>>bookRow;
    cout<<"Enter Column(1-4): ";
     cin>>bookColumn;
     
     bookRow-=1;
     bookColumn-=1;
     
    if(bookRow < 0 || bookRow >= rows || bookColumn < 0 || bookColumn >= column) 
    {
        cout << "Invalid seat position!" << endl;
    }
     
        if(seats[bookRow][bookColumn]=='B' || seats[bookRow][bookColumn]=='b')
        {
            cout<<"Already Booked! "<<endl;
        }
         else
            {
               seats[bookRow][bookColumn]='B';
               cout<<"Booked Successfully! "<<endl;
            }

       cout<<endl<<"Updated Seating Chart: "<<endl;

    for(int i=0;i<rows;i++)
    {
        cout<<"Row "<<i+1<<": ";
        
        for(int j=0;j<column;j++)
        {
            cout<<seats[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

void availableSeats()
{
    int availableSeatscounter=0;

            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<column;j++)
                {
                    if(seats[i][j]=='E'||seats[i][j]=='e')
                    {
                          availableSeatscounter++;
                    }
                }
            }
            cout<<endl;
    cout<<"Available seats: "<<availableSeatscounter;
    
}

void maxEmptySeatsRow()
{
       int maxEmpty=0;
       int empty;
       int location;

       for(int i=0;i<rows;i++)
       {
           empty=0;
           
        for(int j=0;j<column;j++)
        {
               if(seats[i][j]=='E'||seats[i][j]=='e')
               {
                     empty++;
               }
        }
        if(maxEmpty<empty)
        {
              maxEmpty=empty;
              location=i+1;
        }
    }
    cout<<endl<<"Row with maximum empty seats: "<<location;
}
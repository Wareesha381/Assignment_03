#include<iostream>
using namespace std;
void BookStatus();
void countingeachStatus();
void highestmissingbooksrow();

const int rows=5;
const int columns=5;
char Books[rows][columns];

int main()
{
     BookStatus();
     countingeachStatus();
     highestmissingbooksrow();
return 0;
}

void BookStatus()
{

    cout<<"Enter Book Status Grid: "<<endl;

     for(int i=0;i<rows;i++)
    {
         cout<<"Shelf "<<i+1<<": ";

        for(int j=0;j<columns;j++)
        {
            cin>>Books[i][j];
        }
    }

    cout<<endl<<"--- Book Status Grid ---"<<endl;

     for(int i=0;i<rows;i++)
    {
        
           cout<<"Shelf "<<i+1<<": ";

        for(int j=0;j<columns;j++)
        {
            cout<<Books[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void countingeachStatus()
{
    int avaliableBooks=0;
    int missingBooks=0;
    int issuedBooks=0;

    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<columns;j++)
        {
            if(Books[i][j]=='A'||Books[i][j]=='a')
            {
                avaliableBooks++;
            }
            else if(Books[i][j]=='M'||Books[i][j]=='m')
            {
                missingBooks++;
            }
            else if(Books[i][j]=='I'||Books[i][j]=='i')
            {
                issuedBooks++;
            }
            else
            {
                cout<<"Inlavid Status Grid! ";
            }
        }
    }
    cout<<endl;
    cout<<endl<<"--- Book Counts ---"<<endl;
    cout<<"Available: "<<avaliableBooks<<endl;
    cout<<"Issued: "<<issuedBooks<<endl;
    cout<<"Missing: "<<missingBooks<<endl;
}

void highestmissingbooksrow()
{
    int missing=0;
    int missingcounter;
    int shelf;
     for(int i=0;i<rows;i++)
    {
          
missingcounter=0;
        for(int j=0;j<columns;j++)
        {
            if(Books[i][j]=='M'||Books[i][j]=='m')
            {
                missingcounter++;
            }
            if(missingcounter>missing)
            {
                missing=missingcounter;
                shelf=i+1;
            }
        }
    }
    cout<<endl<<"--- Shelves with Highest Missing Books (3) ---"<<endl;
    cout<<"Shelf: "<<shelf;

}


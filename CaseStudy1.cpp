#include<iostream>
using namespace std;
void inputMasks();
void calculateResults();
void assignGrades();
void displayResults();
void findTopScorer();

int students = 10;
int subjects = 5;
int record[10][5];
char grades[10] = {};
int total_Marks[10] = {};
float average[10] = {};
int topper = 0;
int topperindex = -1;


int main()
{
	inputMasks();
    calculateResults();
	assignGrades();
	displayResults();
	findTopScorer();
		cout <<endl<< "Top Scorer with" << topper << " marks of Roll number " << topperindex;

	return 0;
}


void inputMasks() //storing marks of students;
{
	
	for (int i = 0; i < students; i++)
	{
	cout << "Enter Marks of student " << i + 1 << "(out of 100)"<<endl;
		for (int j = 0; j < subjects; j++)
		{
			cout << "Subject" << j + 1 << "\t";
		tryagain:;
			 cin >> record[i][j];
			 if (record[i][j] > 100)
			 {
				 cout << "Enter Again: ";

				 goto tryagain;
			 }
		}
	}
	
}


void calculateResults()//Calculating their marks
{
	

	for (int i = 0; i < students; i++)
	{
		int total = 0;
		for (int j = 0; j < subjects; j++)
		{
			total += record[i][j];
			
		}
		total_Marks[i] = total;
		average[i] = (float)total_Marks[i] / subjects;

	}
}


void findTopScorer()//Finding Topper Student
{
	

	for (int i = 0; i < students; i++)
	{
		if (total_Marks[i]>topper)
		{
			topper = total_Marks[i];
			topperindex = i+1;
		}
	 }
}


void assignGrades()//Assigning Grades to students
{
	for (int i = 0; i < students; i++)
	{
		if (average[i] >= 80)
		{
			grades[i] = 'A';
		}
		else if (average[i] >= 65)
		{
			grades[i] = 'B';
		}
		else if (average[i] >= 50)
		{
			grades[i] = 'C';
		}
		else
		{
			grades[i] = 'D';
		}
	}


}


void displayResults() //Displaying data
{
	cout << "\t\t\tStudent REcord Summary"<<endl<<endl<<endl;
	cout << "Roll No.\tMath\t   Physics\t    Chemistry\t    Computer\t    Islamiyat\tTotal\tAverage\tGrade" << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;

	for (int i = 0; i < students; i++)
	{
		cout << i + 1;


		for (int j = 0; j < subjects; j++)
		{
			cout << "\t   "<<record[i][j] << "\t";
		}
		cout<<"\t"<< total_Marks[i] << "\t" << average[i] << "\t" << grades[i];
		cout << endl;
	}

}
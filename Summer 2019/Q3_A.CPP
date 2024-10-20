#include <iostream.h>
#include <conio.h>

class Student
{
	private:
		int rollNo;
		char name[50];
		float marks;
	public:
		void acceptStudent()
		{
			cout<<"\nEnter the rollNo";
			cin>>rollNo;
			cout<<"\nEnter the name : ";
			cin.ignore();
			cin.getline(name,50);
			cout<<"\nEnter marks : ";
			cin>>marks;
		}
		void displayStudent()
		{
			cout<<"\nRoll no = "<<rollNo;
			cout<<"\nName = "<<name;
			cout<<"\nMarks = "<<marks;
		}
};

void main()
{
	clrscr();
	Student s[5];

	cout<<"\nEnter the student info 1 by 1: ";
	for(int i=0;i<5;i++)
	{
		cout<<"\nFor student " <<i+1;
		s[i].acceptStudent();
	}

	cout<<"\nstudent info: ";
	for(i=0;i<5;i++)
	{
		cout<<"\nstudent " <<i+1;
		s[i].displayStudent();
	}

	getch();
}
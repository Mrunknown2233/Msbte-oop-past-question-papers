#include <iostream.h>
#include <conio.h>

class Staff
{
	private:
		int code;
	public:
		void acceptCode()
		{
			cout<<"\nEnter code : ";
			cin>>code;
		}

		void displayCode()
		{
			cout<<"\nCode = "<<code;
		}
};

class Teacher :public Staff
{
	private:
		char subject[50];
	public:
		void acceptTr()
		{
			acceptCode();
			cout<<"\nEnter subject : ";
			cin.ignore();
			cin.getline(subject,49);
		}
		void displayTr()
		{
			displayCode();
			cout<<"\nSubject = "<<subject;
		}
};


class Officer :public Staff
{
	private:
		char grade[50];
	public:
		void acceptOff()
		{
			acceptCode();
			cout<<"\nEnter grade : ";
			cin.ignore();
			cin.getline(grade,49);
		}
		void displayOff()
		{
			displayCode();
			cout<<"\nGrade = "<<grade;
		}
};


void main()
{
	clrscr();
	Teacher t1;
	Officer off1;

	t1.acceptTr();
	off1.acceptOff();

	t1.displayTr();
	off1.displayOff();


	getch();
}
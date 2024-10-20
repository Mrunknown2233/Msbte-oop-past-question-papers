#include <iostream.h>
#include <conio.h>
class college
{
protected:
	char name[50];
	int code;

public:
	void acceptCollege()
	{
		cout<<"\nEnter college name ";
		cin.getline(name,49);
		cout<<"\nEnter college code : ";
		cin>>code;
	}
	void displayCollege()
	{
		cout<<"\nYour college : "<<name<<"\nYour code : "<<code;
	}
};


class student : public college
{
	private:
		char studName[50];
	public:
		void acceptStudent()
		{
			acceptCollege();
			cout<<"\nEnter  name ";
			cin.ignore();
			cin.getline(studName,49);
		}
		void displayStudent()
		{
			displayCollege();
			cout<<"\nYour name is : "<<studName;
		}
};

void main()
{
	clrscr();
	student s1;
	s1.acceptStudent();
	s1.displayStudent();
	getch();
}
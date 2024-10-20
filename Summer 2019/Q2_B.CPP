#include <iostream.h>
#include <conio.h>

class College
{
	private:
		int collegeCode;
	public:
		void acceptCode()
		{
			cout<<"\nEnter the code : ";
			cin>>collegeCode;
		}
		void displayCode()
		{
			cout<<"\nCollege Code = "<<collegeCode;
		}
};


class student : public College
{
	private:
		int studId;
	public:
		void acceptStud()
		{
			acceptCode();
			cout<<"\nEnter studId : ";
			cin>>studId;
		}
		void displayStud()
		{
			displayCode();
			cout<<"\nStudId = "<<studId;
		}
};


void main()
{
	clrscr();
	student s1;
	s1.acceptStud();
	s1.displayStud();
	getch();
}
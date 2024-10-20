#include <iostream.h>
#include <conio.h>

class College_Student
{
	protected:
		int collegeCode,studId;
};
class test : virtual public College_Student
{
	protected :
		float percentage;
};

class sports : virtual public College_Student
{
	protected:
		char grade[10];
};

class Result: public test,public sports
{
	public:
		void  accept()
		{
			cout<<"\nEnter college Id and stud Id ";
			cin>>collegeCode>>studId;
			cout<<"\nEnter prcentage : ";
			cin>>percentage;
			cout<<"\nEnter grade : ";
			cin>>grade;
		}
		void display()
		{
			cout<<"\nCollege Id = "<<collegeCode<<"\nStud Id = "<<studId<<"\nPercentage : "<<percentage<<"\nGrade = "<<grade;
		}
};

void main()
{
	clrscr();
	Result r1;
	r1.accept();
	r1.display();
	getch();
}


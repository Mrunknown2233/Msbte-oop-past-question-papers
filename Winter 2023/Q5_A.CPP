#include <iostream.h>
#include <conio.h>

class Test
{
	protected:
		int marks1,marks2;
	public:
		void acceptMarks()
		{
			cout<<"\nEnter the marks for test ";
			cin>>marks1>>marks2;
		}
};


class Sports
{
	protected:
		int sportsMarks;
	public:
		void acceptSportsMarks()
		{
			cout<<"\nEnter the sports marks ";
			cin>>sportsMarks;
		}
};

class Result:public Test,public Sports
{
	private:
		int total;
	public:
		void acceptData()
		{
			acceptMarks();
			acceptSportsMarks();
		}
		void totalMarks()
		{
			total= marks1+marks2+sportsMarks;
		}

		void display()
		{
			cout<<"\nMarks in Test : ";
			cout<<"\nMarks1 = "<<marks1;
			cout<<"\nMarks2 = "<<marks2;
			cout<<"\nMarks in sports : ";
			cout<<"\nSportsMarks =  "<<sportsMarks;
			cout<<"\nTotal = "<<total;
		}
};

void main()
{
	clrscr();
	Result r;

	r.acceptData();
	r.totalMarks();
	r.display();
	getch();
}




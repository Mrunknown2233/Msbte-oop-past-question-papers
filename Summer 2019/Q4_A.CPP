#include <iostream.h>
#include<conio.h>

class Subject1
{
	protected:
		float m1;
	public:
		void acceptSub1()
		{
			cout<<"\nEnter marks for subject 1 : ";
			cin>>m1;
		}
};


class Subject2
{
	protected:
		float m2;
	public:
		void acceptSub2()
		{
			cout<<"\nEnter marks for subject 2 : ";
			cin>>m2;
		}
};


class Result:public Subject1,public Subject2
{
	private :
		float total;
	public:
		void accept()
		{
			acceptSub1();
			acceptSub2();
		}
		int calTotalMarks()
		{
			total=m1+m2;
			return total;
		}

		void display()
		{
			cout<<"\nTotal = "<<total;
		}
};


void main()
{

	clrscr();
	Result r1;
	r1.accept();
	r1.calTotalMarks();
	r1.display();
	getch();
}
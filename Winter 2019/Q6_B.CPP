#include <iostream.h>
#include <conio.h>

class College_Student
{
	protected:
		int rollNo;
        char name[50];
};
class test : virtual public College_Student
{
	protected :
		float marks1,marks2;
};

class sports 
{
	protected:
		int score;
};

class Result: public test,public sports
{
	int total;
	public:
		void  accept()
		{
			cout<<"\nEnter rollNo and name ";
			cin>>rollNo;
            cin.ignore();
            cin.getline(name,50);
			cout<<"\nEnter marks 1 and marks 2 : ";
			cin>>marks1>>marks2;
			cout<<"\nEnter score : ";
			cin>>score;
		}
        int calTotal()
	{
	    total = marks1+marks2+score;
	    return total;
	}
		void display()
		{
			cout<<"\nRoll No = "<<rollNo<<"\nName = "<<name<<"\nTotal = "<<total;
		}
};

void main()
{
	clrscr();
	Result r1;
	r1.accept();
    r1.calTotal();
	r1.display();
	getch();
}


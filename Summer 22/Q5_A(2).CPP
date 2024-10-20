#include <iostream.h>
#include <conio.h>

class train
{
	private:
		int trainNo;
		char name[50];
	public:
		void accept()
		{
			cout<<"\nEnter train Name : ";
			cin.getline(name,49);
			cout<<"\nEnter train No ";
			cin>>trainNo;
		}
		void display()
		{
			cout<<"\nTrain Name = "<<name;
			cout<<"\nTrain No = "<<trainNo;
		}
};

void main()
{
	clrscr();
	train t,*tptr;
	tptr=&t;
	tptr->accept();
	tptr->display();
	getch();
}
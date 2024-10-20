#include <iostream.h>
#include <conio.h>
#include <string.h>



class student
{
	private:
		char name[50];
		int rollNo;
	public:
		student()
		{
			strcpy(name,"Soumya");
			rollNo = 53;
		}
		void displayStud()
		{
			cout<<"\nYour name : " <<name;
			cout<<"\nYour rollNO : "<<rollNo;
		}
};


void main()
{
	clrscr();
	student s1;
	s1.displayStud();
	getch();
}

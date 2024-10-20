#include <iostream.h>
#include <conio.h>
#include <string.h>

class student
{
		private:
		int rollNo;
		char stud_name[50];
	public:
	       void accept()
	       {
			cout<<"\nEnter rollNo : ";
			cin>>rollNo;
			cout<<"\nEnter name : ";
			cin.ignore();
			cin.getline(stud_name,50);
	       }
		void display()
		{
			cout<<"\nRoll no = "<<rollNo;
			cout<<"\nName = "<<stud_name;
		}
};


void main()
{
	clrscr();
	student s[5];

	for(int i =0;i<5;i++)
		s[i].accept();
	for(i = 0;i<5;i++)
		s[i].display();
	getch();
}

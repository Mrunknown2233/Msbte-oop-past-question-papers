#include <iostream.h>
#include <conio.h>
#include <string.h>

class student
{
	private:
		int rollNo;
		char name[50];
		char department[50];
	public:
		student(int rollNo,char *name,char *department)
		{
			this->rollNo=rollNo;
			strcpy(this->name,name);
			strcpy(this->department,department);
		}
		student(int rollNo,char *name)
		{
			this->rollNo=rollNo;
			strcpy(this->name,name);
			strcpy(this->department,"CO");
		}

		void display()
		{
			cout<<"\nRoll no = "<<rollNo;
			cout<<"\nName = "<<name;
			cout<<"\nDepartment = "<<department;
		}
};


void main()
{
	clrscr();
	student s1(1,"Soumya"),s2(2,"ABC","CE");
	s1.display();
	s2.display();
	getch();
}

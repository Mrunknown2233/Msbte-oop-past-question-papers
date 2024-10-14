#include <iostream.h>
#include <conio.h>
#include <string.h>


#define MAX 1000

class student
{
	private :
		typedef struct
		{
			int age;
			char name[MAX];
			int rollNo;
		}Stud;
		Stud s1;
	public:
		student()
		{
			s1.age=0;
			s1.rollNo=0;
			strcpy(s1.name,NULL);
		}

		void acceptData()
		{
			cout<<"\nEnter the student details : \nRollno Name Age";
			cin>>s1.rollNo>>s1.name>>s1.age;
		}
		void displayData()
		{
			cout<<"\nThe Student Details Are : ";
			cout<<"\nName = "<<s1.name;
			cout<<"\nRollNo = "<<s1.rollNo;
			cout<<"\nAge = "<<s1.age;
		}
};

void main()
{
	clrscr();
	student s;
	s.acceptData();
	s.displayData();
	getch();
}
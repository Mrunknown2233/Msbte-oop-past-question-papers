#include <iostream.h>
#include <conio.h>

class employee
{
	private:
		int empId;
		char name[50];
	public:
		void acceptEmp()
		{
			cout<<"\nEnter empId : ";
			cin>>empId;
			cout<<"\nEnter name : ";
			cin.ignore();
			cin.getline(name,49);
		}
		void displayEmp()
		{
			cout<<"\nEmp Id = "<<empId<<"\nName = "<<name;
		}
};


class emp_info : public employee
{
	float basicSal;
	public:
		void acceptEmpInfo()
		{
			acceptEmp();
			cout<<"\nEnter salary : ";
			cin>>basicSal;
		}
		void displayEmpInfo()
		{
			displayEmp();;
			cout<<"\nBasic salary = "<<basicSal;
		}
};

void main()
{
	clrscr();
	emp_info e1;
	e1.acceptEmpInfo();
	e1.displayEmpInfo();
	getch();
}
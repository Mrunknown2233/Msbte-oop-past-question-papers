#include <iostream.h>
#include <conio.h>

class employee
{
	private :
		int empId;
		float salary;
	public:
		employee()
		{
			empId=salary=0;
		}
		void accept()
		{
			cout<<"\nEnter the empId: ";
			cin>>empId;
			cout<<"\nEnter the salary: ";
			cin>>salary;
		}

		void display()
		{
			cout<<"\nEmpId: "<<empId;
			cout<<"\nSalary: "<<salary;
		}
};

void main()
{
	clrscr();
	employee e[10];
	cout<<"\nEnter the employee detail 1 by 1";
	for(int i = 0;i<10;i++)
		e[i].accept();

	for(i = 0 ;i<10;i++)
	{
		cout<<"\nFor Employee "<<i+1;
		e[i].display();
	}

	getch();
}


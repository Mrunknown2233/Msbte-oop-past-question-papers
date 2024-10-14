#include <iostream.h>
#include <conio.h>

class measure
{
	private:
		int add1,add2,add3;
	public:
		measure(int a1,int a2,int a3)
		{
			add1=a1;
			add2=a2;
			add3=a3;
		}
		void add()
		{
			add3+=add2+add1;
		}
		void  display()
		{
			cout<<"\nAddition of the 3 data member is: "<<add3;
		}
};


void main()
{
	clrscr();
	int a,b,c;
	cout<<"\nEnter 3 nos : ";
	cin>>a>>b>>c;
	measure m(a,b,c);
	m.add();
	m.display();
	getch();
}

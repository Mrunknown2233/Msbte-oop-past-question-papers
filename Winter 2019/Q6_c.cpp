#include <iostream.h>
#include <conio.h>

class abc
{
	private :
		int a,b,c;
	public:
		abc(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}

		void operator -()
		{
			this->a=-this->a;
			this->b=-this->b;
			this->c=-this->c;
		}

		void display()
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
			cout<<"\nc= "<<c;
		}
};

void main()
{
	clrscr();
	int x,y,z;
	cout<<"\nEnter 3 nos ";
	cin>>x>>y>>z;
	abc a(x,y,z);
	a.display();
	-a;
	a.display();
	getch();
}
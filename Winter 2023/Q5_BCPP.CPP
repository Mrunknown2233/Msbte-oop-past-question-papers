#include <iostream.h>
#include <conio.h>

class Timepass
{
	private :
		int a;
	public:
		void acceptA(int a)
		{
			this->a=a;
			cout<<"\nEnter value = "<<this->a;

		}
		void display()
		{
			cout<<this->a;
		}

		Timepass findGreater(Timepass b)
		{
			return (this->a>b.a? *this:b);
		}
};

void main()
{
	clrscr();
	Timepass A,B;
	A.acceptA(10);
	B.acceptA(20);
	Timepass c = B.findGreater(A);
	cout<<"\nGreater value = ";
	c.display();
	getch();
}

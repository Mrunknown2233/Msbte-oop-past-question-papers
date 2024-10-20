#include <iostream.h>
#include <conio.h>

class abc
{
	private:
		static int a;
	public:
		abc()
		{
			a++;
		}

		static void display()
		{
			cout<<"\nThe no of objectt created are "<<a;
		}
};

int abc::a=0;
void main()
{
	clrscr();
	abc a1,b1,c1;
       abc::display();
	getch();
}
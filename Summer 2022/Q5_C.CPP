#include <iostream.h>
#include <conio.h>

class Class2;
class Class1
{
	private:
		int m1;
	public:
		Class1(int a)
		{
			m1=a;
		}
		friend avg(Class1,Class2);
};

class Class2
{
	private:
		int m2;
	public:
		Class2(int a)
		{
			m2=a;
		}
		friend avg(Class1,Class2);
};

int  avg(Class1 a,Class2 b)
{
	return (a.m1+b.m2)/2;
}

void main()
{
	clrscr();
	Class1 a(2);
	Class2 b(4);
	cout<<"\nAvg  = "<<avg(a,b);
	getch();
}
#include <iostream.h>
#include <conio.h>

class B;
class A
{
	private :
		int a;
	public:
		A(int a)
		{
			this->a=a;
		}
		friend findSmallest(A,B);
};


class B
{
	private :
		int b;
	public:
		B(int b)
		{
			this->b=b;
		}
		friend findSmallest(A,B);
};


int findSmallest(A a,B b)
{
	if(a.a!=b.b)
		return (a.a<b.b?a.a:b.b);
	else
	{
		cout<<"\nBoth are equal";
		return -1;
	}
}



void main()
{
	clrscr();
	int x;
	cout<<"\nEnter a no  : ";
	cin>>x;
	A aa(x);

	cout<<"\nEnter a no  : ";
	cin>>x;
	B bb(x);

	cout<<"\nThe smallest of the two no is  : "<<findSmallest(aa,bb);
	getch();
}



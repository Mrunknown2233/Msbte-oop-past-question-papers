#include <iostream.h>
#include <conio.h>


class Number
{
	private:
		int a;
		float c;
	public:
		Number()
		{
		}
		Number(int a,float c)
		{
			this->a=a;
			this->c=c;

		}
		Number operator +(Number other)
		{
			Number temp;
			temp.a=this->a+other.a;
			temp.c=this->c+other.c;
			return temp;
		}
		void display()
		{
			cout<<"\nThe no are : "<<a<<" and "<<c;
		}


};
void main()
{
	clrscr();
	int a;
	float b;
	cout<<"\nEnter a int and a float no one by one ";
	cin>>a>>b;
	Number num1(a,b);

	cout<<"\nEnter a int and a float no one by one ";
	cin>>a>>b;
	Number num2(a,b);

	Number num3;

	num3 = num1 + num2;
	num3.display();
	getch();
}


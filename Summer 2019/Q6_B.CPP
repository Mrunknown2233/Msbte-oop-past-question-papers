#include <iostream.h>
#include <conio.h>

void swap(int &a,int &b)
{
	/*
	a = a^b;
	b= a^b;
	a= a^b;
	*/
	int temp =a;
	a=b;
	b=temp;
}

void main()
{
	clrscr();
	int c,d;
	cout<<"\nEnter 2 no : ";
	cin>>c>>d;
	swap(c,d);
	cout<<"\nc = "<<c<<"\nd = "<<d;
	getch();
}
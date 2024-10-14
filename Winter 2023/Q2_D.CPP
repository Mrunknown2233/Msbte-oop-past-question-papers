#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int a;
	cout<<"\nEnter the no";
	cin>>a;
	if(a%2)
		cout<<"\nThe no("<<a<<") is odd";
	else
		cout<<"\nThe no("<<a<<") is even";
	getch();
}
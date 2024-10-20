#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n,fact=1;
	cout<<"\nEnter the no : ";
	cin>>n;
	for(int i=n;i>0;i--)
		fact*=i;
	cout<<"\nFactorial of given no = "<<fact;
	getch();
}

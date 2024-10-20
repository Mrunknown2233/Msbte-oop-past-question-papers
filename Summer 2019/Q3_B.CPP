#include <iostream.h>
#include <conio.h>
#define MAX 100

void main()
{
	clrscr();
	int n,x[MAX],sum=0;

	cout<<"\nEnter the size of array : ";
	cin>>n;

	cout<<"\nEnter the elements in the array 1 by 1: ";
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		sum+=x[i];
	}

	cout<<"\nYour array : ";
	for(i=0;i<n;i++)
		cout<<x[i]<<" ";
	cout<<"\nSum of all elements = "<<sum;
getch();

}
#include <iostream.h>
#include <conio.h>
#define MAX 100

void main()
{
	clrscr();
	int n;
	cout<<"\nEnter the length of the array ";
	cin>>n;

	int a[MAX];

	cout<<"\nEnter the elements in the array 1 by 1 : ";
	for(int i = 0 ; i < n ; i++)
		cin>>a[i];

	int smallest = 32767;
	for(i=0;i<n;i++)
	{
		if(smallest>a[i])
			smallest=a[i];
	}

	cout<<"\nThe smallest no in the array is : "<<smallest;
	getch();
}


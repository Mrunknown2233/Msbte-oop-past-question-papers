#include <iostream.h>
#include <conio.h>

typedef struct Book
{
	char name[50];
	int bookId;
}Book;

void accept(Book b[],int n)
{
	cout<<"\nEnter the book name and book details 1 by 1";
	for(int i=0;i<n;i++)
	{
		cout<<"\nFor Book "<<i+1;
		cout<<"\nEnter the name : ";
		if(i>0)
			cin.ignore();
		cin.getline(b[i].name,49);
		cout<<"\Enter Book id ";
		cin>>b[i].bookId;
	}
}

void display(Book b[],int n)
{
	cout<<"\nThe book data is as follows : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nFor Book"<<i+1;
		cout<<"\nName = "<<b[i].name;
		cout<<"\nBook Id = "<<b[i].bookId;
	}
}


void main()
{
	clrscr();
	Book b[5];
	accept(b,5);
	display(b,5);
	getch();
}

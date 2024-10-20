#include <iostream.h>
#include <conio.h>
#define MAX 50


class book
{
	private:
		char title[MAX],author_name[MAX],publication[MAX];
		int price;
	public:
	       void accept()
	       {
			cout<<"\nEnter title : ";
			cin.getline(title,50);
			cout<<"\nEnter author name : ";
			cin.getline(author_name,50);
			cout<<"\nEnter publication : ";
			cin.getline(publication,50);
			cout<<"\nEnter price : ";
			cin>>price;
	       }
		void display()
		{
			cout<<"\ntitle = "<<title;
			cout<<"\nAuthor name = "<<author_name;
			cout<<"\nPublication = "<<publication;
			cout<<"\nPrice = "<<price;
		}
};


void main()
{
	clrscr();
	book b,*bptr;
	bptr=&b;
	bptr->accept();
	bptr->display();
	getch();
}
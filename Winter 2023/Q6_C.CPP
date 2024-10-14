#include <iostream.h>
#include <conio.h>

class item
{
	private :
		char itemName[100];
		int code;
		float price;
	public:
		void acceptData()
		{
			cout<<"\nEnter the product code : ";
			cin>>code;
			cout<<"\nEnter the item Name : ";
			cin>>itemName;
			cout<<"\nEnter the price: ";
			cin>>price;
		}
		void displayData()
		{
			cout<<"\nItem code : "<<code;
			cout<<"\nItem Name : "<<itemName;
			cout<<"\nItem Price : "<<price;
		}
};

void main()
{
	clrscr();
	item a;
	item *ptr = &a;
	ptr->acceptData();
	ptr->displayData();
	getch();
}


#include<iostream.h>
#include <conio.h>



class mobile
{
	private:
		int price;
		char modelNo[50];
	public:
		void accpetData()
		{
			cout<<"\nEnter the model no of the mobile : ";
			cin.ignore();
			cin.getline(modelNo,49);
			cout<<"\nENter the price in Rupees ";
			cin>>price;
		}
		void displayData()
		{
			cout<<"\nThe Model No is : "<<modelNo;
			cout<<"\nTHe price is : "<<price;
		}
};


void main()
{
	clrscr();
	mobile m[10];

	for(int i = 0 ; i < 10 ; i++)
		m[i].accpetData();
	for(i = 0 ; i < 10 ; i++)
		m[i].displayData();
	getch();
}

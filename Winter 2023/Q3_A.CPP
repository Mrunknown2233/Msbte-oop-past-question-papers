#include <iostream.h>
#include <conio.h>

class rectangle
{
	private:
		float length,breadth,area;
	public:
		rectangle()
		{
			length=breadth=0;
			area = 0;
		}
		void acceptData(float length,float breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		void calculateArea()
		{
			area=length*breadth;
		}
		void display()
		{
			cout<<"\nLength =  "<<length;
			cout<<"\nBreadth =  "<<breadth;
			cout<<"\nArea = "<<area;
		}
};

void main()
{
	clrscr();
	rectangle r1;
	float len,breadth;
	cout<<"\nEnter the length and breadth ";
	cin>>len>>breadth;
	r1.acceptData(len,breadth);
	r1.calculateArea();
	r1.display();
	getch();
}
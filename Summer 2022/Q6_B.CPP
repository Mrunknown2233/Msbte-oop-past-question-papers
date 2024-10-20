#include <iostream.h>
#include <conio.h>
#include <string.h>

class String
{
	private:
		char str[100];
	public:
		void setStr()
		{
			cout<<"\nEnter the string : ";
			cin.getline(str,49);
		}
		void getStr()
		{
			cout<<"\nYour string = "<<str;
		}

		void operator +(String other)
		{
			strcat(this->str,other.str);
		}
};

void main()
{
	clrscr();
	String s1,s2;
	s1.setStr();
	s2.setStr();
	s1+s2;
	s1.getStr();
	getch();
}
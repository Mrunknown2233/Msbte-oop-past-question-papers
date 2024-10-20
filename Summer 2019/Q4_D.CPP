#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main()
{
	clrscr();
	ifstream inFile;
	inFile.open("student1.txt");
	 int space=0;
	 char ch;
	if(inFile)
	{
		while(!inFile.eof())
		{       inFile.get(ch);
			if(ch == ' ')
				space++;
		}
		inFile.close();
		cout<<"\nThe no of space in the file : "<<space;
	}
	getch();
}

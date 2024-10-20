#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main()
{
	clrscr();
	int noOfLines=0;
	char str[100];

	ifstream inFile;
	inFile.open("soumya.txt");

	if(inFile)
	{
		while(!inFile.eof())
		{
			if(inFile.getline(str,100,'\n'))
				noOfLines++;
		}

		inFile.close();
	}
	cout<<"\nNo of lines = "<<noOfLines;
	getch();

}

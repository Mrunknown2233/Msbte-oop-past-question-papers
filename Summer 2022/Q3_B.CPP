#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main()
{
	clrscr();
	ifstream inFile;
	inFile.open("student 1.txt");

	ofstream outFile;
	ouFile.open("student 2.txt");

	char str[1000];

	if(inFile && outFile)
	{
		while(!inFile.eof())
		{
			inFile.getline(str,1000);
			outFile<<str<<"\n";
		}
		cout<<"\nFile content copied successfully ";
		inFile.close();
		outFile.close();
	}
	else
		cout<<"\nCan't open the file ";

	getch();
}




#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <fstream.h>

void main()
{
	clrscr();
	char str1[1000];
	str1[0]='a';

	ofstream outFile;
	outFile.open("sample1.txt");

	if(outFile)
	{
		cout<<"\nEnter the content of the file write(exit) to end the entering\n";


		while(strcmpi(str1,"exit")!=0)
		{
			cin.getline(str1,10000);
			if(strcmpi(str1,"exit")!=0)
				outFile<<str1<<"\n";
		}
	}
	else
		cout<<"\nUnable to open the file !";

	getch();
}
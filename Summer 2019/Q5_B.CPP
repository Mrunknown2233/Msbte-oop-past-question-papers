#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main()
{
	clrscr();
	char str[100];

	ifstream inFile;
	inFile.open("abc.txt");

	ofstream outFile;
	outFile.open("xyz.txt",ios::app);

	if(inFile && outFile)
	{
		while(!inFile.eof())
		{
			inFile.getline(str,100);
			outFile<<str;
		}
		cout<<"\nFile content appended successfully";
		outFile.close();
		inFile.close();
	}
}
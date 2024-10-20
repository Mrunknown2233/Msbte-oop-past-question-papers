#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <fstream.h>


void main()
{
	clrscr();
	char str1[1000];

	ifstream inFile;
	inFile.open("sample1.txt");

	ofstream outFile;
	outFile.open("copyOfSample1.txt");


	if(inFile && outFile)
	{
		while(!inFile.eof())
		{
			inFile.getline(str1,1000);
			outFile<<str1<<"\n";
		}
		inFile.close();
		outFile.close();
		cout<<"\nFile content copied ";
	}
	else
		cout<<"\nUnable to open a file ";


	/*checking the copyOfSample1 */
	inFile.open("copyOfSample1.txt");
	if(inFile)
	{
		cout<<"\nFile content are:  \n";
		while(!inFile.eof())
		{
			inFile.getline(str1,1000);
			cout<<str1<<"\n";
		}
		inFile.close();
	}
	else
		cout<<"\nUnable to open a file ";


	getch();
}

#include <iostream>
#include <fstream>
#define MAX 100
using namespace std;

int main(void)
{
  ofstream outFile("Q5_b.txt");
  char str[MAX];
  if(outFile)
  { 
    outFile<<"Welcome to poly";
    outFile.close();
    cout<<"\nFile written successfully";
  }
  else
    cout<<"\nCannot open the file ";
    
  ifstream inFile("Q5_b.txt");
  if(inFile)
  { 
    inFile.getline(str,sizeof(str));
    cout<<"\n"<<str;
    inFile.close();
  }
  else
    cout<<"\nCannot open the file ";
    
}
    
    

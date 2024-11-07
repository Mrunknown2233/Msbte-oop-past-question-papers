#include <iostream>
#include <fstream>
#include <stdlib.h>
#define MAX 100
using namespace std;

int main(void)
{
  ifstream inFile;
  char ch;
  int noOfSpaces = 0;
  inFile.open("Q4_d.txt");
  
  if(inFile)
  { 
      while(inFile.get(ch))
      {
          if(ch== ' ' )
            noOfSpaces++;   
      }
        cout<<"\nThe no of space in the file : "<<noOfSpaces;
      inFile.close();
  }
  
}
        

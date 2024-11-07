#include <iostream>
using namespace std;
int multiply(int num,int i)
{
  if(i>10)
      return 0;
  cout<<"\n"<< num <<" x "<<i<<" = "<<num*i;
  return multiply(num,i+1);
}
int main(void)
{
  multiply(7,1);
}
  

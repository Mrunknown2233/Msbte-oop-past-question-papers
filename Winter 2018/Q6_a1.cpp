#include <iostream>
using namespace std;

int main(void)
{
  int num;
  cout<<"\nEnter the number : ";
  cin>>num;
  num%2==0?cout<<"\nNo ("<<num<<") is even":cout<<"\nNo ("<<num<<") is odd";
}

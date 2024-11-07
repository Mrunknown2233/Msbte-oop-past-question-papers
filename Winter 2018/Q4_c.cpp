#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
 /* int temp = *a;
  *a = *b;
  *b =temp;
  */
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}
void swap(float *c,float *d)
{
  
  float temp = *c;
  *c = *d;
  *d =temp;
  
  /*
    This wont work as the ^ is a binary operator which only works for integers
    If you want to try it,just uncomment the part below
  *c = *c ^ *d;
  *d = *c ^ *d;
  *c = *c ^ *d;
  */
}
   
int main(void)
{
  int a,b;
  float c,d;
  cout<<"\nEnter value of 2 integer variables : ";
  cin>>a>>b;
  cout<<"\nEnter value of 2 float variables : ";
  cin>>c>>d;
  
  cout<<"\nBefore swap: ";
  cout<<"\na = "<<a<<" b = "<<b;
  cout<<"\nc = "<<c<<" d = "<<d;
  swap(&a,&b);
  swap(&c,&d);
  
  cout<<"\nAfter Swap : ";
  cout<<"\na = "<<a<<" b = "<<b;
  cout<<"\nc = "<<c<<" d = "<<d;
}

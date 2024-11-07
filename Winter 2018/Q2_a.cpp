#include <iostream>
using namespace std;
int main(void)
{
  int smallest,x[5],i;
  cout<<"\nEnter the elements of the array 1 by 1:\n ";
  for( i = 0;i<5;i++)
    cin>>x[i];
  cout<<"\nElements of the array are : ";
  for(i=0;i<5;i++)
    cout<<" "<<x[i];
  smallest = x[0];
  for(i=0;i<5;i++)
  {
    if(x[i]<smallest)
      smallest=x[i];
  }
  cout<<"\nThe smallest element in the array is : "<<smallest;
}

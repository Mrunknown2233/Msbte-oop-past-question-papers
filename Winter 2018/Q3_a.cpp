#include <iostream>
using namespace std;
class Addition
{
  private:  
    int x;
    int y;
  public:
    Addition()
    {
      cout<<"\nEnter the value of x : ";
      cin>>x;
      cout<<"\nEnter the value of y : ";
      cin>>y;
    }
    void display()
    {
      cout<<"\nThe addition of x("<<x<<") and  y("<<y<<") = "<<x+y;
    }
 };
 
int main(void)
{
  Addition a1;
  a1.display();
} 

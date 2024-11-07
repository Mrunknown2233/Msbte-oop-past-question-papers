#include <iostream>
using namespace std;
const float pi = 3.14;
class Circle
{
  private:
    float radius,area;
  public:
    void getData()
    {
      cout<<"\nEnter the radius: ";
      cin>>radius;
    }
    /* 
    float calculateArea()
    {
      return area = pi * radius * radius;
    }
    float putData()
    {
      return area;
      
    }
    */
    void putData()
    {
      area = pi * radius * radius;
      cout<<"\nArea = "<<area;
    }
};


int main(void)
{
  Circle c1;
  c1.getData();
  /*
  c1.calculateArea();
  cout<<"\nArea = "<<c1.putData();
  */
  c1.putData();
}

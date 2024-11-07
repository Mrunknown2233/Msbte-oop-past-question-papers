#include <iostream>
#include <string.h>
using namespace std;
class String
{
  private:
    char str[100];
  public:
    String()
    {
      cout<<"\nEnter the string  : ";
      cin>>str;
    }
    void getString()
    {
      cout<<"\n"<<str;
    }
    String operator+(String s1)
    {
      strcat(this->str,s1.str);
      return *this;
    }
};
int main(void)
{
  String s1,s2;
  String str = s1+s2;
  str.getString();
  
}
  

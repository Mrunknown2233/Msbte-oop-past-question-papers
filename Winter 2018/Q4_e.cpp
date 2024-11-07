#include <iostream>
using namespace std; 
class B;
class A
{ 
  private:  
      int a;
  public:
    A()
    {
      cout<<"\nEnter the value of a : ";
      cin>>a;
    }
  friend void findGreatest(A , B);
};

class B
{
  private:
    int b;
  public:
    B()
    {
      cout<<"\nEnter the value of b : ";
      cin>>b;
    }
  friend void findGreatest(A,B);
};

void findGreatest(A AA,B BB)
{
  if (AA.a>BB.b)
    cout<<"\nThe datamember of class A is greates("<<AA.a<<").";
  else
    cout<<"\nThe datamember of class B is greates("<<BB.b<<").";
}

int main(void)
{
  B bb;
  A aa;
  findGreatest(aa,bb);
}

#include <iostream>
#define MAX 100
using namespace std;

struct Employee
{
  int empid;
  char empname[MAX];
};
void acceptData(struct Employee &e)
{
  cout<<"\nEnter the emp id : ";
  cin>>e.empid;
  cout<<"\nEnter the emp name : ";
  cin>>e.empname;
}
void displayData(struct Employee e)
{
  cout<<"\nEmp ID : "<<e.empid;
  cout<<"\nEmp NAME : "<<e.empname;
}
  
int main(void)
{
  struct Employee e1;
  acceptData(e1);
  displayData(e1);
}
  

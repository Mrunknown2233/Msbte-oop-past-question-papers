#include <iostream>
#define MAX 100
using namespace std;

class College
{
  protected:
    int code;
    char name[MAX];
};


class student : public College
{
  private:  
  int rollNo;
  char sname[MAX];
  public: 
  void acceptData()
  {
    cout<<"\nEnter the college Code : ";
    cin>>code;
    cout<<"\nEnter the college Name : ";
    cin>>name;
    cout<<"\nEnter the student's Roll No : ";
    cin>>rollNo;
    cout<<"\nEnter the student's Name : ";
    cin>>sname;
  }
  void displayData()
  {
    cout<<"\nCollege Code : "<<code;
    cout<<"\nCollege Name : "<<name;
    cout<<"\nStudent's RollNo : "<<rollNo;
    cout<<"\nStudent's Name : "<<sname;
  }
};


int main(void)
{
  student s1;
  s1.acceptData();
  s1.displayData();
}

#include <iostream>
#define MAX 100
using namespace std;

class Employee
{
  private:
    int empId;
    int empCode;
  public:
    void setEmployee()
    { 
      cout<<"\nEnter the emp Id : ";
      cin>>empId;
      cout<<"\nEnter the emp Code : ";
      cin>>empCode;
    }
    void getEmployee()
    {
      cout<<"\nEmp ID : "<<empId;
      cout<<"\nEmp CODE : " <<empCode;
    }
};

class Programmer : public Employee
{
  private:
    char skill[MAX];
  public:
    void setProgrammer()
    {
      setEmployee();
      cout<<"\nEnter the skill : ";
      cin>>skill;
    }
    
    void getProgrammer()
    {
      getEmployee();
      cout<<"\nSkill : "<<skill;
    }
};
class Manager : public Employee
{
  private:
    char department[MAX];
  public:
    void setManager()
    {
      setEmployee();
      cout<<"\nEnter the department : ";
      cin>>department;
    }
    
    void getManager()
    {
      getEmployee();
      cout<<"\nDepartment : "<<department;
    }
};


int main(void)
{
  Programmer p1;
  p1.setProgrammer();
  p1.getProgrammer();
  
  Manager m1;
  m1.setManager();
  m1.getManager();
}

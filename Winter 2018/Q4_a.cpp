#include <iostream>
#define MAX 100
using namespace std;
class Teacher
{
  private:
    int empId;
    char Name[MAX];
  public:
    void setTeacher()
    {
      cout<<"\nFor Teacher's Detail : ";
      cout<<"\nEnter the Emp Id of teacher : ";
      cin>>empId;
      cout<<"\nEnter the name of the teacher : ";
      cin>>Name;
    }
    void getTeacher()
    {
      cout<<"\nTeacher's Details: ";
      cout<<"\nEmp ID : "<<empId;
      cout<<"\nName : "<<Name;
    }
};

class Student
{
  private:
    int rollNo;
    char sname[MAX];
  public:
    void setStudent()
    {
      cout<<"\nFor Student's  Details : ";
      cout<<"\nEnter the rollNo : ";
      cin>>rollNo;
      cout<<"\nEnter the name : ";
      cin>>sname;
    }
    void getStudent()
    {
      cout<<"\nStudent's Details : ";
      cout<<"\nRoll No : "<<rollNo;
      cout<<"\nName : "<<sname;
    }
};

class Info : public Teacher,public Student
{
  public:
    void setInfo()
    {
      setTeacher();
      setStudent();
    }
    void getInfo()
    {
      getTeacher();
      getStudent();
    }
};


int main(void)
{
  Info i1;
  i1.setInfo();
  i1.getInfo();
}

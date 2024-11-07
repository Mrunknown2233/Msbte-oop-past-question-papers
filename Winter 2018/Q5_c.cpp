#include <iostream>
#define MAX 100
using namespace std;
class Account
{
  private:
    int accNo;
    char name[MAX];
    float bal;
  public:
  void setAccount()
  {
    cout<<"\nEnter the acc No : ";
    cin>>accNo;
    cout<<"\nEnter the name : ";
    cin>>name;
    cout<<"\nEnter the balance : ";
    cin>>bal;
  }
  int checker()
  {
    return bal<10000?1:0;
  }
  void displayAccount()
  {
    cout<<"\nAcc.No : "<<accNo;
    cout<<"\nName : "<<name;
    cout<<"\nBalance : "<<bal;
  }
};



int main(void)
{
  Account a[8];
  int i;
  cout<<"\nEnter the account Details for each one by one : \n";
  for(i=0;i<8;i++)
    a[i].setAccount();
  cout<<"\nAccounts below balance of 10000";
  for(i=0;i<8;i++)
  {
    if(a[i].checker())
      a[i].displayAccount();
  }
}
    

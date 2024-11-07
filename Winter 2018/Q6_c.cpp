#include <iostream>
#define MAX 100

using namespace std;
class CarManufacturer
{
  private:
    char name[MAX];
  public:
    void setCarManufacturer()
    {
      cout<<"\nEnter the Car manufacturer's Name : ";
      cin>>name;
    }
    void getCarManufacturer()
    {
      cout<<"\nCar Manufacturer's Name : "<<name;
    }
};

class CarModel : public CarManufacturer
{
  private:
    char modelName[MAX];
    int modelNo;
  public:
    void setCarModel()
    {
      setCarManufacturer();
      cout<<"\nEnter the model no : ";
      cin>>modelNo;
      cout<<"\nEnter the model name : ";
      cin>>modelName;
    }
    void getCarModel()
    {
      getCarManufacturer();
      cout<<"\nModel NO : "<<modelNo;
      cout<<"\nModel NAME : "<<modelName;
    }
};


class Car: public CarModel
{
  private:
    char colour[MAX];
    int carNo;
  public:
    void setCar()
    {
      setCarModel();
      cout<<"\nEnter the no of car : ";
      cin>>carNo;
      cout<<"\nEnter the colour of the car : ";
      cin>>colour;
    }
    
    void getCar()
    {
      getCarModel();
      cout<<"\nCar NO : "<<carNo;
      cout<<"\nCar COLOUR : "<<colour;
    }
};

int main(void)
{
  Car c1;
  c1.setCar();
  c1.getCar();
}

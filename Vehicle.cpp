#include <iostream>
using namespace std;

//base class vehicle
class vehicle
{
  public :
  void vehicle()
  {
    cout<<"I am a vehicle"<<endl;
  }
};

//derived class two wheeler
class twowheeler : public vehicle
{
  public :
  void twowheeler()
  {
    cout<<"i have teo wheels"<<endl;
  }
};

//derived class for bike
class bike : public twowheeler
{
  public :
  void bike()
  {
    cout<<"i am a bike"<<endl;
  }
};
//create an object of class bike
int main()
{
bike mybike;
return 0;
}

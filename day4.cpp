#include<iostream>
using namespace std;

class car_detail{
public:
  char manuf[100];
  char model[20];
  int engine_num;
  int chasis;
  int year_manuf;
  char color[20];
  void get_detail();
  void print_detail();
};

void car_detail :: get_detail(){
  cout<<endl<<"Manufacturer name: ";
  cin>>manuf;
  cout<<"Model name: ";
  cin>>model;
  cout<<"Engine number: ";
  cin>>engine_num;
  cout<<"Chasis number: ";
  cin>>chasis;
  cout<<"Year of Manufacture: ";
  cin>>year_manuf;
  cout<<"Color of the car: ";
  cin>>color;
}

void car_detail :: print_detail(){

  cout<<"Manufaturer name: "<<manuf<<endl;
  cout<<"Model name: "<<model<<endl;
  cout<<"Engine number: "<<engine_num<<endl;
  cout<<"Chasis number: "<<chasis<<endl;
  cout<<"Year of manufacture: "<<year_manuf<<endl;
  cout<<"Color of the car: "<<color<<endl;
}

int main(){
  class car_detail car1,car2;
  cout<<endl<<"Enter car details of car1 :"<<endl;
  car1.get_detail();
  cout<<endl<<"Enter car details of car2 :"<<endl;
  car2.get_detail();

  cout<<"Details of car1 is :"<<endl;
  car1.print_detail();

  cout<<endl<<"Details of car2 is :"<<endl;
  car2.print_detail();

  return 0;
}

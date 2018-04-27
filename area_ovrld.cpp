#include<iostream>
using namespace std;

class calc{
public:
  float ar;
  void area(int side=0);
  void area(double radius=0);
  void area(float side1=0,float side2=0);
};

void calc :: area(int side){
  ar=side*side;
  cout<<"Area of square = "<<ar<<endl;
}
void calc :: area(double radius){
  ar=3.14*radius*radius;
  cout<<"Area of circle = "<<ar<<endl;
}
void calc :: area(float side1,float side2){
  ar=side1*side2;
  cout<<"Area of rectangle = "<<ar<<endl;
}

int main(){
  class calc obj;
  obj.area(10);
  obj.area(5.5);
  obj.area(2.2,3.4);
  return 0;
}

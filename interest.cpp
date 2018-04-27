#include<iostream>
#include<cmath>
using namespace std;




class interest{
public:

  float intrst;

  void si(float amount,float rate=8.5,float year=5);
  void ci(float amount,float rate=8.5,float year=5);
};

void interest:: si(float amount,float rate,float year){
  intrst=amount*rate*year/100;
  cout<<endl<<intrst<<endl;
}

void interest:: ci(float amount,float rate,float year){
  intrst=amount*pow(1+rate,year);
  cout<<endl<<intrst<<endl;
}

int main(){
  class interest obj;
  obj.si(1000);
  obj.ci(1000,3,2);
  return 0;
}

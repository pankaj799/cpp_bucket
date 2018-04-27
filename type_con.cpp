#include<iostream>
using namespace std;

class convert{
  int h,m,s;
public:
  double hr;
  void getValue(){
    cin>>hr;
  }
  convert(double hrs){
    h = (int) hrs/60;
    m = (int) (hrs) - (h*60);
    s = (int) (hrs*100)%100 ;
  }
  convert(){}

  void out(){
    cout<<h<<" hrs: "<<m<<" mins: "<<s<<" seconds\n";
  }
};

int main(){

  convert ob1,T1;
  cout<<"Enter Time in minutes. Example : 135.26\n";
  ob1.getValue();
  T1 = ob1.hr ;
  cout<<"\nEntered value is : \n";
  T1.out();
  return 0;
}

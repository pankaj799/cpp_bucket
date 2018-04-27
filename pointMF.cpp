#include<iostream>
using namespace std;

class io{
  int a;
public:
  void get(){
    cin>>a;
  }
  void put(){
    cout<<a<<endl;
  }
};

main(){
  void (io::*p)();
  p=&io::put;
  io ob;
  cout<<"\nPointer To MF\n";
  cout<<"Enter a number \n";
  ob.get();
  cout<<"Entered value is\n";
  (ob.*p)();
  return 0;
}

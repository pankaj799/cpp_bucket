#include<iostream>
using namespace std;

class pInClass{
  int a;
  int *p;
public:
  void get(){
    cout<<"Enter number \n";
    cin>>a;
  }
  void put(){
    cout<<a<<endl;
  }
};

class pClass{
public:
  int a;
};

int main()
{
  class pInClass ob,*p;
  cout<<"Pointer To Class :"<<endl;
  p=&ob;
  ob.get();
  p->put();
  (*p).put();

  cout<<"\nPointer To Data Members\n";
  cout<<"Enter Number\n";
  int pClass::*ptr = &pClass::a;
  class pClass o;

  cin>>o.a;
  cout<<o.*ptr<<endl;
  return 0;
}

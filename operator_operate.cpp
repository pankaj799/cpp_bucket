#include<iostream>
using namespace std;

class operate{
public:
  int a,b,c;
  operate(int x,int y,int z){
    a=x;b=y;c=z;
  }
  void put(){
    cout<<a<<" "<<b<<" "<<c<<endl;
  }
  // Note here that the return type is class type
  operate operator++(){
    operate t(0,0,0);
    t.a = ++a;
    t.b = ++b;
    t.c = ++c;
    return (t);
  }
};

int main(){
  operate ob(10,20,30);
  operate obj(0,0,0);
  cout<<"Initial values of a,b and c are : \n";
  ob.put();
  obj = ++ob;
  cout<<"Passing values to another class object :\n";
  obj.put();
  return 0;
}

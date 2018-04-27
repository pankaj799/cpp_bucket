#include<iostream>
using namespace std;

class A{
private:
  int x;
public:
  A(int save){x=save;}
  void display(){
    cout<<x<<endl;
  }
};

class B{
private:
  int y ;
public:
  A(int save){y=save;}
  void displayy(){
    cout<<y<<endl;
  }
};

class inherit:public A,public B{

 A a(10);
 B b(20);

};

int main(){
  inherit out;
  out.display();
  return 0;
}

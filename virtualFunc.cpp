#include<iostream>
using namespace std;

class base{
public:
  virtual void one(){
    cout<<"Bye\n";
  };
};

class derived: public base{
public:
  void one(){
    cout<<"Hello\n";
  }
};

int main(){
  derived ob;
  base* obj ;
  obj = &ob;
  obj->one();
}

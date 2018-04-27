#include<iostream>
using namespace std;

class super{
  int a ;
protected:
  int b ;
public:
  int c ;

};

class sub: public super{

  
  void out(){
    cout<<a<<" "<<b<<" "<<c<<endl;
  }
};

int main(){
  sub obj;
  obj.out();
  return 0;
}

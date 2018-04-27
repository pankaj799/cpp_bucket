#include<iostream>
using namespace std;
class demo{
  int x;
public:
  void get(){
    cout<<"Enter no."<<endl;
    cin>>x;
  }
  friend void put(demo a){
    cout<<"Number = "<<a.x<<endl;
  }
};
/*
void put(demo a){
  cout<<"Number = "<<a.x<<endl;
}
*/
main(){
  demo z;
  z.get();
  put(z);
  return 0;
}

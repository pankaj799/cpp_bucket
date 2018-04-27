#include<iostream>
using namespace std;

void ref(int &r){
  r=20;
  cout<<"Reference to 'a' "<<r;
}


int main(){
  int a=10;
  ref(a);
  //int &r=a;
  //cout<<"Reference to 'a' "<<r;
  return 0;
}

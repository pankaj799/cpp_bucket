#include<iostream>
using namespace std;

void xyz(int &y){
  y=10;
}

int main(){
  int x=5;
  xyz(x);
  cout<<x<<endl;
  return 0;
}

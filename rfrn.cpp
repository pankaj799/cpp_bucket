#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int a = 10 , b = 20;
  int &r=a;
  cout<<"R= "<<r<<" and A= "<<a<<endl;
  r=b;
  cout<<"R= "<<r<<" and A= "<<a<<endl;
  getch();
}

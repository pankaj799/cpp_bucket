#include<iostream>
using namespace std;
int s;
int sum(int a,int b){
  s=a+b;
  return s;
}
int sum(double a, int b){
  s=a+b;
  return s;
}
int sum(char a,char b){
  s=a+b;
  return s;
}
int main(){
  int ss;
  ss=sum(10,20);
  cout<<"\nSum of two int :"<<ss<<endl;
  ss=sum(20.2,20);
  cout<<"Sum of one double and another int \n      and returned as int :"<<ss<<endl;
  ss=sum('a','b');
  cout<<"Sum of ASCII value of 'a' & 'b' :"<<ss<<endl;
  return 0;
}

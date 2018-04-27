#include<iostream>
using namespace std;
const int a=0;

void sum(int a1=a,int a2=a,int a3=a,int a4=a);
// {
  // int s=a1+a2+a3+a4;
  // cout<<"\n Required sum is = "<<s<<endl;
// }

int main(){
  sum();
  sum(10);
  sum(10,20);
  sum(10,20,30);
  sum(10,20,30,40);
  return 0;
}
void sum(int a1,int a2,int a3,int a4){
  int s=a1+a2+a3+a4;
  cout<<"\n Required sum is = "<<s<<endl;
}

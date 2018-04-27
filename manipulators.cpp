#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int a=200,b=300;
  float x=7,y=3;

   cout<<setfill('#');

  // cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
    // changes precision properly
     //without it : 2.333
      //with it : 2.3333
   cout<<setw(5)<<a<<setw(5)<<b<<endl;
   cout<<setw(6)<<a<<setw(5)<<b<<endl;
//setfill() fills space with certain character
//setw() sets the width and assign value to it

  cout<<setbase(16)<<a<<endl;
  cout<<oct<<a<<endl;
  cout<<hex<<a<<endl;
  cout<<setprecision(4)<<(x/y)<<endl;
return 0;
//hex,oct,dec,setbase() converts the base type
}

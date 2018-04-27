#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter the values of a and b\n";
  cin>>a;
  cin>>b;
  try{
    if(b!=0){
      cout<<"Result(a/b) = "<< (a/b)<<endl ;
    }
    else{
      throw(b);
    }
  }
  //here it is catch(int i) for b=i
  catch(...){
    cout<<"Exception caught : "<<b<<endl;
  }
}

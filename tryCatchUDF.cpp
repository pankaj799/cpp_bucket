#include<iostream>
using namespace std;

void myFunct(int x,int y,int z){
  cout<<"We are inside my Function"<<endl;
  if((x-y)!=0){
    cout<<z/(x-y)<<endl;
  }
  else{
    throw (x-y);
  }

}

int main(){
  try{
    cout<<"We are inside try block"<<endl;
    myFunct(20,20,30);
  }
  catch(int i){
    cout<<"We are inside catch block"<<endl;
    cout<<"Exception caught : (x-y) = "<<i<<endl;
  }
}

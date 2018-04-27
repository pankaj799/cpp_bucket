#include<iostream>
using namespace std;

void myFunction(int x,int y){
  try{
    cout<<"Inside myFunction try block"<<endl;
    if(y==0)
      throw y;
    else
      cout<<x/y<<endl;
  }

  catch(int a){
    cout<<"Caught int inside myFunction: y = "<<a<<endl;

    throw;
  }
cout<<"End of function"<<endl;
}

int main(){
  try{
    cout<<"Inside main try block"<<endl;
    myFunction(30,10);
    cout<<endl<<"Now testing second input"<<endl;
    myFunction(10,0);
  }
  catch(int){
    cout<<"caught int inside main"<<endl;
  }
}

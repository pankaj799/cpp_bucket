#include<iostream>
using namespace std;

int main(){
  int age;
  double number;
  cout<<"Enter your age and registration number\n";
  cin>>age>>number;

  try{
    if( age==0 ){ throw(age); }
    else if( number==0 ){ throw(number); }
    else{
      cout<<"Age = "<<age<<" "<<"Registration Number = "<<(int)number<<endl;
    }
  }
  catch(int i){
    cout<<"Exception Caught : age = "<<i<<endl;
  }
  catch(double i){
    cout<<"Exception Caught : Registration Number = "<<(int)i<<endl;
  }
}

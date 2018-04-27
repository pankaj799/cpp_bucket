#include<iostream>
using namespace std;
class add{
int a,b,c;
public:
  void get(){
    cin>>a>>b>>c;
  }
  void put(){
    cout<<a<<" "<<b<<" "<<c<<endl;
  }

  add operator+( add &obj ){
      add temp;
      temp.a = a + obj.a;
      temp.b = b + obj.b;
      temp.c = c + obj.c;

      return temp;
  }

};

int main(){
  add one,two,three;

  cout<<"Enter values in object1\n";
  one.get();
  cout<<"Enter values in object2\n";
  two.get();

  three = one+two;
  cout<<"Sum of values are : \n";
  three.put();
}

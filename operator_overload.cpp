#include<iostream>
using namespace std;
class op{
  int a,b,c;
public:
  void get(){
    cin>>a>>b>>c;
  }
  void put(){
    cout<<a<<" "<<b<<" "<<c<<endl;
  }

  void operator ++(){
    a++;b++;c++;
  }
  friend void operator -(op &ref);
};

void operator -(op &ref){
  ref.a=-ref.a;
  ref.b=-ref.b;
  ref.c=-ref.c;
}

int main(){
  class op ob;
  cout<<"Enter values of a,b and c\n";
  ob.get();
  cout<<"Value entered is \n";
  ob.put();
  cout<<"Calling operator ++()\n";
  ++ob;
  ob.put();
  cout<<"Calling friend function operator -()\n";
  operator -(ob);
  ob.put();
  return 0;
}

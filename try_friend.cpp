#include<iostream>
using namespace std;

class two;

class one{
private:
  int a, b, c;
public:
  void get(){
    cin>>a>>b>>c;
  }

  friend void access (one &out , two &out2);
};

class two{
private:
  int x,y,z;
public:
  void get(){
    cin>>x>>y>>z;
  }

 friend void access(one &out , two &out2);
};

//definition of friend
void access (one &out,two &out2){
    cout<< out2.x + out.a <<endl;
    cout<< out2.y + out.b <<endl;
    cout<< out2.z + out.c <<endl;
}

int main(){
  one ob;
  two ob2;
  cout<<"Enter values of a,b and c\n";
  ob.get();
  cout<<"Enter values of x,y and z\n";
  ob2.get();

  cout<<"Sum of entered values are : \n";
  access(ob,ob2);
  return 0;
}

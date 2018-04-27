//Friend Class calculates product
//Friend function calculates sum
#include<iostream>
using namespace std;

class student2;
class student1{
private:int a1,b1,c1;
public:
  void getdata1(){
    cout<<"Enter value of A1 and B1 \n";
    cin>>a1>>b1;
  }
  void adddata1(){
    c1=a1+b1;
  }
  friend void display(student1 s1,student2 s2);
  friend class mul;
};

class student2{
private:int a2,b2,c2;
public:
  void getdata2(){
    cout<<"Enter value of A2 and B2 \n";
    cin>>a2>>b2;
  }
  void adddata2(){
    c2=a2+b2;
  }
  friend void display(student1 s1,student2 s2);
  friend class mul;
};

void display(student1 s1,student2 s2){
  cout<<endl<<"Sum of A1 and B1 is "<<s1.c1<<endl;
  cout<<"Sum of A1 and B1 is "<<s2.c2<<endl;
}

class mul{
  int mlt;
public:
  void display(student1 s1,student2 s2){
  cout<<"Multiplicated value of (A1+B1) and (A2+B2) is :"<<s1.c1*s2.c2<<endl;
 }
};

int main(){
  student1 a;
  student2 b;
  mul m;
  a.getdata1();
  b.getdata2();
  a.adddata1();
  b.adddata2();
  display(a,b);
  m.display(a,b);
  return 0;
}

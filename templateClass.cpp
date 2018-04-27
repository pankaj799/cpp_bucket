#include<iostream>
using namespace std;
template<class t,class t2>
class sample{
  // t value1, value2;
  t value3;
  t2 value4 ;
public:
  // void getdata();
  // void sum();
  void show();
};

// template <class t>
// void sample<t>::getdata() {
//   cin>>value1>>value2;
// }

// template <class t>
// void sample<t>::sum(){
//   t value;
//   value = value1+value2;
//   cout<<"Sum = "<<value<<endl;
// }

template <class t,class t2>
void sample<t,t2>::show(){
  cin>>value3>>value4;
  cout<<"Values entered are : "<<value3<<" "<<value4<<endl;
}
int main(){
  // sample <int>obj1;
  // sample <float>obj2;
  sample <int,float>obj3;

  // cout<<"Enter two int numbers..\n";
  // obj1.getdata();
  // obj1.sum();
  //
  // cout<<"Enter two floating point nums..\n";
  // obj2.getdata();
  // obj2.sum();

  cout<<"Enter any int and float numbers\n";
  obj3.show();
}

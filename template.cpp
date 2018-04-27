#include<iostream>
#include<string>
using namespace std;


template<class T>

void sum(T a, T b){
  T sum = a+b;
  cout<<sum<<endl;
}
template<class T>
void sum(T a, T b, T c){
  T sum = a+b+c;
  cout<<sum<<endl;
}
void sum(int a,int b,int c){
  int sum = a+b+c ;
  cout<<sum<<endl;
}

// void out( T a, T b ){
//   cout<<a<<" "<<b<<endl;
// }

int main(){
  // string a = "pranav ",b = "singh";
  // out(a,b);
  // a="hello "; b="world!";
  // out(a,b);
  // out(22,33);
  // out(22.3,34.5);
  // out(8,a);
  sum(2,3);
  sum(2,3,4);
  string a="hi ",b="hello ",c="bye";
  sum(a,b,c);

}

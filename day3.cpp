#include<iostream>
using namespace std;

class count{
  int reg_no;
  static section;
public:
  void get_no(){
    cin>>reg_no;
  }
  static sec(){
    cin>>section;
  }

};
int count::section;
int main(){
 count a,b;
 cout<<"Enter name of section"<<endl;
 count::sec();

}

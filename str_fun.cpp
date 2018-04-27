#include<iostream>
#include<string>
using namespace std;

int main(){
  string s1,s2;
  cout<<"Enter two String of atleast 5 length to perform actions \n";
  getline(cin,s1);
  getline(cin,s2);
  cout<<"\nInseting s2 in s1\n";
  cout<<s1.insert(4,s2)<<endl;

  cout<<"\nErasing elements from s1\n";
  cout<<s1.erase(4,5)<<endl;

  cout<<"\nReplacing elements from s2\n";
  cout<<s2.replace(1,3,s1)<<endl;

  return 0;
}

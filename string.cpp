#include<iostream>
#include<string>
using namespace std;

int main(){
  string s1,s2;

  cout<<"Enter two string to compare"<<endl;
  getline(cin,s1);
  getline(cin,s2);

  if(s1==s2)
   cout<<"Equal\n";
  else if(s1<s2)
  cout<<"Less\n";
  else
  cout<<"Greater\n";

  cout<<"\nNow Comparing Using compare function\n";
  if(s1.compare(s2)==0)
   cout<<"Equal\n";
  else if(s1.compare(s2)<0)
  cout<<"Less\n";
  else
  cout<<"Greater\n";

  cout<<"\nConcatinated String is :"<<s1+" "+s2;
   return 0;
}

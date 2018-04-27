#include<iostream>
using namespace std;

namespace name {
char n[20]="Pranav Singh";
}

int main()
{

  int ch;
  cin>>ch;
  cout<<"My name is "<< name::n<< " with int = "<<ch<<"\n";
return 0;
}

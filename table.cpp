#include<iostream>
using namespace std;
int main()
{
  int i;
  int t;
  cout << "Enter the number whose table is to be found \n";
  cin >> t;
  for(i=1;i<=10;i++)
  {
    cout<<i<<". "<<t<<"*"<<i<<" = "<<t*i<<"\n";
  }
  return 0;
}

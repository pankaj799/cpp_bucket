#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of degree of kite\n";
  cin>>n;
for(int i=0;i<n;i++)
{
     for(int j=n;j>i;j--)
      cout<<" ";

     for(int j=0;j<=i;j++)
      cout<<"* ";
      cout<<"\n";
}
for(int i=n-1;i>0;i--)
{
  for(int j=n-1;j>i;j--)
   cout<<" ";
}

return 0;
}

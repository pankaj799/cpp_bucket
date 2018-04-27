#include<iostream>
using namespace std;

class calc
{
private :
      int pn1,pn2;
public :
      int n1,n2;
      char nm[20];
      void name();
      void ip()
      {
          cout<<endl<<"Enter two new numbers:"<<endl;
          cin>>pn1;
          cin>>pn2;
      }
      void op()
      {
        cout<<"New number 1 is "<<pn1;
        cout<<endl<<"New number 2 is "<<pn2;
      }
      void opp();
};

  void calc :: name()
  {
    cin>>nm;
    cout<<"Hello "<<nm;
  }
  void calc :: opp()
  {
    cout<<"Here It Is!"<<endl;
  }

main()
{
  int temp;
  class calc obj;
  cout<<"Enter your name... \n";
  obj.name();
  cout<<"\n\nEnter two numbers"<<endl;
  cin>>obj.n1;
  cin>>obj.n2;

  cout<<"Number 1= "<<obj.n1;
  cout<<endl<<"Number 2= "<<obj.n2;

  obj.ip();
  obj.op();

  cout<<"\n\nScope Resolution! Enter any number to test..."<<endl;
  cin>>temp;
  obj.opp();
  return 0;
}

#include<iostream>
using namespace std;
int num;
class point{
public:
int ar[3][3];
void input();
void display();
void search();
};

void point::input(){
  for(int i=0;i<3;i++)
  { for(int j=0;j<3;j++)
    cin>>ar[i][j];
  }
}

void point::display(){
  int  *p;
  p=&ar[0][0];

  for(int i=0;i<9;i++){
    cout<<*p<<" "; p++;
    if((i+1)%3==0)
    cout<<endl;

  }
}

void point::search(){
  int  *p;
  p=&ar[0][0];
  int chck=0;

  int u=9,l=0,mid;
  for(mid=(u+l)/2;l<=u;mid=(u+l)/2){

    if(*(p+mid)==num)
      { chck=1;
        cout<<"Element is found"<<endl; break ;
      }
    if(num>*(p+mid))
    l=mid+1;
    else if(num<*(p+mid))
    u=mid-1;
  }
  if(chck==0)
  cout<<"Element not found"<<endl;
}

main(){
  class point ob;
  cout<<"Enter 9 values in 2D array in sorted order"<<endl;
  ob.input();
  cout<<endl<<"Values entered are"<<endl;
  ob.display();
  cout<<"Enter element to be searched"<<endl;
  cin>>num;
  ob.search();
}

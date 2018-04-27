#include<iostream>
using namespace std;

class Node{
  static int count;
  public:
  Node(){
    count++;
    cout<<"Node"<<count<<" Created"<<endl;
  }
  int data;
  Node *ptr ;
};
int Node::count;

int main(){
  Node *p;
  Node N1,N2,N3,N4;
  N1.data = 10;
  N1.ptr = &N2;
  N2.data = 20;
  N3.ptr = &N3;
  N3.data = 30;
  N3.ptr = &N4;
  N4.data = 40;
  N4.ptr = NULL;
  cout<<endl;
  p=&N1;
  while( p!=NULL ){
    cout<< (p->data) <<endl;
    p=(p->ptr);
  }
  cout<<endl;
}

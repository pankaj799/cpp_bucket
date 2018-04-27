#include<iostream>
#include<list>

using namespace std;

void print(list<int> liP){

  list<int>:: iterator start = liP.begin();
  list<int>:: iterator stop = liP.end();
  while(start!=stop){
    cout<<*start;
    ++start;
  }
  cout<<endl;
}


int main(){

  int arr[] = {2,3,4,5,6};
  list<int> li(arr,arr+5);
  cout<<"Complete list : ";
  print(li);
  cout<<"\nPopped Data from last Node : ";
  li.pop_back();
  print(li);
  cout<<"\nAdded Data to the first Node : ";
  li.push_front(8);
  print(li);
  cout<<"\nSorted List : ";
  li.sort();
  print(li);
  cout<<endl;
}

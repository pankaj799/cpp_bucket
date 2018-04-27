#include<iostream>
#include<vector>
using namespace std;

void max(vector<int>::iterator start,vector<int>::iterator end){
  int m=*start;
  while(start!=end){
    if(*start>m) m=*start;
  ++start;
  }
  cout<< m <<endl;
}
//
// void sort(vector<int>::iterator start,vector<int>::iterator end){
//   int temp;
//   for (int *i = &start; i<end-1; i++){
//     for (int *j = &i+1; j<end ; j++ ){
//       if( *i > *j ){
//         temp = *j;
//         *j = *i;
//         *i = temp;
//       }
//     }
//   }
//
//   cout<<"Sorted Vector is : " ;
//   for (int *i = &start; i<end-1; i++)
//   cout<<*i;
//   cout<<endl;
// }

int main(){
  int arr[]={2,77,3,66,96,4,2,7};
  vector<int> v(arr,arr+8);
  max(v.begin(),v.end());
  // sort(v.begin(),v.end());
}

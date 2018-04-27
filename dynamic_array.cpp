#include<iostream>
using namespace std;


void sort(int *arr){

    int i,j,temp=0;
    for(i=0;i<10;i++){
      for(j=0;j<9;j++){
          if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
      }
    }

}

void get(int *Arr){
  int i;
  for(i=0;i<10;i++){
    cin>>Arr[i];
  }

}

void out(int *ar){
  int i;
  for(i=0;i<10;i++)
    cout<<ar[i]<<" ";
  cout<<endl<<endl;
}

int main(){
  int *p = new int[10];
  cout<<"Enter values in array of length 10 in any order."<<endl;
  get(p);
  cout<<endl<<endl<<"Now sorting using Bubble Sort in ascending order \n";
  sort(p);
  out(p);
  delete [] p;
}

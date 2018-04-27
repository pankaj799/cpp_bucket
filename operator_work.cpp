#include<iostream>
using namespace std;

class working{
private:
  int x,y,z;
public:
  void get(){
    cin>>x>>y>>z;
  }
  // working operator+(working &ob){
  //   working obj;
  //   obj.x = x+ob.x;
  //   obj.y = y+ob.y;
  //   obj.z = z+ob.z;
  //  return obj;
  // }

  void out(){
    cout<<x<<" "<<y<<" "<<z<<endl;
  }

  // friend int operator==(working &one,working &two);

};
// int operator==(working &one,working &two){
//   if(one.x==two.x){
//     if(one.y==two.y){
//       if(one.z==two.z)
//       return 1;
//     }
//   }
//   else
//   return 0;
// }

int main(){
  working ob1,ob2;
  cout<<"Enter values in x,y,z for object1\n";
  ob1.get();
  cout<<"Enter values in x,y,z for object2\n";
  ob2.get();
  // cout<<"\nComparing values of ob1 and ob2\n";
  // int check= operator==(ob1,ob2);
  //   if(check==1)
  //     cout<<"x,y,z of ob1 and ob2 matches!\n";
  //   else
  //       cout<<"x,y,z of ob1 and ob2 do not match\n";
  // cout<<"Adding values of ob1 and ob2 (using object): ";
  // working add = ob1.operator+(ob2);
  // add.out();

  working ob3;
  cout<<"\nEnter value of x,y,z of object3\n";
  ob3.get();
  working chck=ob1+ob2+ob3;
  cout<<"\nAdding values of x,y,z of all three objects (using direct addition)\n";
  chck.out();
  return 0;

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class A{
    public:
    int x,y,z;
    void getdata(){
        cin>>x>>y>>z;
        cout<<x<<y<<z<<endl;
    }
};

class B:public A{
    public:
    void check(){
        cout<<x<<y<<z<<endl;
        if(x==y || y==x || x==z ){
            cout<<"Invalid input"<<endl;
        }
        else{
            if(x<y&&x<z)      cout<<x<<endl;
            else if(y<x&&y<z) cout<<y<<endl;
            else if(z<x&&z<y) cout<<z<<endl;
        }
    }

};

int main() {
  B b;
    b.getdata();
    b.check();
    return 0;
}

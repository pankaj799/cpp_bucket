#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class convert{
public:
int hr, min, hr_out;

void getTime(){
    cin>>hr>>min;
    if(hr>24||min>59)
    {
      cout<<"Invalid Input"<<endl;
      return;
    }
}

void outTime(int check){


        if(check==12) { hr_out=12;}
        else if(check==13) { hr_out=1;}
        else if(check==14) { hr_out=2;}
        else if(check==15) { hr_out=3;}
        else if(check==16) { hr_out=4;}
        else if(check==17) { hr_out=5;}
        else if(check==18) { hr_out=6;}
        else if(check==19) { hr_out=7;}
        else if(check==20) { hr_out=8;}
        else if(check==21) { hr_out=9;}
        else if(check==22) { hr_out=10;}
        else if(check==23) { hr_out=11;}
        else if(check==0||check==24) { hr_out=0;}

    if( hr_out==0 && min==0 ) {
      cout<<"MIDNIGHT"<<endl;
      return;
    }

    if( hr_out==12 && min==0 ) {
      cout<<"NOON"<<endl;
    }

    else if(check>=12&&check<24){
        pm();
    }
    else if(check==24||(check>=0&&check<12)){
        am();
    }
}


void pm(){
    // cout<<hr_out<<endl;;
    cout<<hr_out<<":"<<min<<"PM"<<endl;
}

void am(){
    cout<<hr_out<<":"<<min<<"AM"<<endl;
}
};
int main() {
    convert  t;
    t.getTime();
    t.outTime(t.hr);
    return 0;
}

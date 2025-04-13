#include<iostream>
using namespace std;
class Time{
    public:
    int hours , minutes;
    
    Time(){}
    Time(int t){
        hours = t/60;
        minutes = t%60;
    }
};

int main(){
    Time t1,t2;
    int period1 = 160;
    int period2 = 260;
    t1 = Time(period1);//Explicit Constructor Invocation
    cout<<"The time is "<<t1.hours<<" hours and "<<t1.minutes<<" minutes"<<endl;
    
    t2 = period2; //Implicit Constructor Invocation
    cout<<"The time is "<<t2.hours<<" hours and "<<t2.minutes<<" minutes"<<endl;
    return 0;
}
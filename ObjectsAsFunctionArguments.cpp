#include<iostream>
using namespace std;

class time{
    int minutes;
    int hours;
    public:
    void setTime(int h, int m){
        minutes=m;
        hours=h;
    }
    void showTime(){
        cout<<"The time is "<<hours<<" hours and "<<minutes<<" minutes"<<endl;
    }
    void sum(time,time);
};
void time:: sum(time t1 , time t2){
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
}

int main(){
    time t1 , t2 ,t3;
    t1.setTime(1,20);
    t2.setTime(2,20);
    t1.showTime();
    t2.showTime();
    t3.sum(t1,t2);
    t3.showTime();
    return 0;
}
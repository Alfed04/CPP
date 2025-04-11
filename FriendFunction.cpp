#include<iostream>
using namespace std;

class sample{
    int num1,num2;
    public:
    void setNums(){
        num1=25;
        num2=20;
    }
    friend float mean(sample);
};
float mean (sample s){
    float mean = (float(s.num1 + s.num2)/2);
    return mean;
}

int main(){
    sample s;
    s.setNums();
    cout<<"The mean of num1 and num2 is "<<mean(s);
    return 0;
}
#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

int add(int a, int b, int c ){
    return a+b+c;
}

int main(){
    cout<<add(2,3.5)<<endl;
    cout<<add(2,3,4)<<endl;
    return 0;
}
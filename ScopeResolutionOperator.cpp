#include<iostream>
using namespace std;
//variable outside of the main function
int m=10;

int main(){
    //variable inside main function 
    int m=20;

    {
        //variable inside block
        int k=m;
        int m=30;
        cout<<"we are in inner block"<<"\n";
        cout<<"k = "<<k<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"::m = "<<::m<<endl;
    }

    cout<<"we are in inner block"<<"\n";
    cout<<"m = "<<m<<endl;
    cout<<"::m = "<<::m<<endl;
    return 0;
}

/*
k=20
m=30
m=10
m=20
m=10

*/
#include<iostream>
using namespace std;

class Test{
    static int count;
    int code;
    public:
    void setCode(){
        code= ++count;
    }
    void showCode(){
        cout<<"Object no. "<<code<<endl;
    }
    void showCount(){
        cout<<"Count : "<<count<<endl;
    }
};

//Implicitly initialized to 0
//Explicitly you can initialize to anything
int Test::count=10;

int main(){
    Test t1,t2,t3;
    t1.setCode();
    t1.showCode();
    t1.showCount();
    t2.setCode();
    t2.showCode();
    t2.showCount();
    t3.setCode();
    t3.showCode();
    t3.showCount();
    return 0;
}
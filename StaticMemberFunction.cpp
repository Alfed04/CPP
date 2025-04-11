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
    static void showCount(){
        cout<<"Count : "<<count<<endl;
        //Below line of code will give an error because static member function can have access to only the static member variables
        // cout<<code;
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
    Test::showCount();
    t3.setCode();
    t3.showCode();
    Test::showCount();
    return 0;
}

//Additional property of the static member function - it can be called using class name
//class-name::function-name();
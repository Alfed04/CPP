#include<iostream>
using namespace std;

int count = 0;
class alpha{
    public:
    alpha(){
        count++;
        cout<<"object created no. "<<count<<endl;
    }
    ~alpha(){
        cout<<"object destroyed no. "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"entered in main block \n";
    alpha A1,A2,A3,A4;
    {
        cout<<"entered in block 1\n";
        alpha A5;
    }
    {
        cout<<"entered in block 2\n";
        alpha A6;
    }
    cout<<"re-entered in main block\n";

    return 0;
}
#include<iostream>
using namespace std;

class Superclass{
    public:
    int foo;
    void display(){
        cout<<"I am in Superclass";
    }
};

class Subclass : public Superclass{
    public:
    int bar;
    void display(){
        cout<<"I am in Superclass";
    }
};

int main(){
    Subclass d;
    //object d has access to foo ,bar & display(both methods)

    Superclass b = d;
    //object b has access to only foo & display (Superclass method), hence it loses the bar in subclass , therefor it is called as object slicing

    b.display();

    return 0;
}
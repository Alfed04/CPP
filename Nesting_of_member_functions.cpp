//Nesting of member functions means that the member function of a class can call the member function of the same class in its body


#include<iostream>
using namespace std;

class Set{
    private:
    int m,n;
    public:
    void input(void);
    int largest(void);
    void display(void);
};

void Set::input(){
    cout<<"Enter the values for m and n : ";
    cin>>m>>n;
}
int Set:: largest(){
    if(m>n){
        return m;
    }else{
        return n;
    }
}
void Set:: display(){
    cout<<"The largest value is = "<<largest();
}

int main(){
    Set s = Set();
    s.input();
    s.display();
    return 0;
}
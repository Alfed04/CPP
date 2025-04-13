#include<iostream>
using namespace std;

class Complex{
    int real , imag;
    public:
    void setComplexNum(int r, int i){
        real = r;
        imag = i;
    }
    void showComplexNum(){
        cout<<"The Complex number is "<<real<<" i + "<<imag<<" j"<<endl;
    }
    operator int(){
        return 440;
    }

};

int main(){
    Complex c1;
    c1.setComplexNum(3,6);
    c1.showComplexNum();

    int c2 = c1;
    cout<<"The number is "<<c2<<endl;

    return 0;
}
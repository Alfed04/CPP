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

    friend Complex operator+(Complex &a, Complex &b){
        Complex c;
        c.real = a.real + b.real;
        c.imag = a.imag + b.imag;
        return c;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.setComplexNum(3,6);
    c2.setComplexNum(3,9);
    c3 = operator+(c1,c2);

    c1.showComplexNum();
    c2.showComplexNum();
    c3.showComplexNum();

    return 0;
}
#include<iostream>
using namespace std;

class Complex{
    float x , y;
    public:
    void setComplexNum(float real , float imag){
        x= real;
        y= imag;
    }
    void showComplexNum();
    friend Complex Sum( Complex , Complex);
};
void Complex:: showComplexNum(){
    cout<<" The number is "<<x<<"i + "<<y<<" j"<<endl;
}
Complex Sum ( Complex c1 , Complex c2){
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

int main (){
    Complex c1, c2 , c3;

    c1.setComplexNum(2,3);
    c2.setComplexNum(4,5);

    c1.showComplexNum();
    c2.showComplexNum();

    c3 = Sum(c1,c2);
    c3.showComplexNum();
    return 0;
}
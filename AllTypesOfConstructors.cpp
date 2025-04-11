#include<iostream>
using namespace std;


class student{
    int roll_no;
    int marks;
    public:
    //default constructor
    student(){};
    //parametrized constructor
    student(int r, int m){
        roll_no=r;
        marks=m;
    }
    //copy constructor
    student(student &x){
        roll_no=x.roll_no;
        marks=x.marks;
    }
    void display(){
        cout<<"roll_no = "<<roll_no<<" marks = "<<marks<<endl;
    }
};

int main (){
    student s1;//calling default constructor
    s1.display();

    student s2(4,97);//calling parametrized constructor
    s2.display();

    student s3(s2);//calling copy constructor
    s2.display();

    student s4 = s2;//another way to call copy constructor
    s4.display();
    
    return 0;
}
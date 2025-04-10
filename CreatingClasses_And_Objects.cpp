#include<iostream>
using namespace std;

class Person{
    char name[30];
    int age;
    public:
    void setDetails(void);
    void getDetails(void);
};

void Person ::setDetails(void){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}

void Person::getDetails(void){
    cout<<"Your name is "<<name<<"\n";
    cout<<"Your age is "<<age<<"\n";
}

int main(){
    Person p = Person();
    p.setDetails();
    p.getDetails();
    return 0;
}
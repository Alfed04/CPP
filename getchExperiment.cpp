#include<iostream>
#include<conio.h>
using namespace std;
//getch() takes only one character and it does not have buffer so it returns the entered character immediately
int main (){
    char ch = getch();
    cout<<"Entered character was : "<<ch<<endl;
    return 0;
}
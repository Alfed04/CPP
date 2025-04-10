#include<iostream>
using namespace std;

class Item{
    int number;
    int cost;
};

int main(){
    Item i = Item();
    //Below two statements will give an error because by default the member variables and functions are private which cannot be accessed outside of the class definition
    i.number=3;
    i.cost=1500;
    return 0;
}
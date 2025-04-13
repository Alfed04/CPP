#include<iostream>
using namespace std;

class Item{
    int item_grade , item_price;
    public:
    void setItemGrade(int g){
        item_grade =g;
    }
    void setItemPrice(int p){
        item_price =p;
    }
    void showItem(){
        cout<<"item "<<item_grade<<" "<<item_price<<endl; 
    }
};
class Product{
    int product_grade , product_price;
    public:
    void setProduct(int g, int p){
        product_grade =g;
        product_price =p;
    }
    void showProduct(){
        cout<<"product "<<product_grade<<" "<<product_price<<endl; 
    }
    operator Item(){
        Item item;
        item.setItemGrade(product_grade);
        item.setItemPrice(product_price);
        return item;
    }
};

int main(){
    
    Product p;
    p.setProduct(2,120);
    p.showProduct();
    Item i = p;
    i.setItemGrade(3);
    i.showItem();
    return 0;
}
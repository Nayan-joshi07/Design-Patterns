#include<iostream>
#include<string>
using namespace lld{

enum ItemType{
    COKE = 25,
    CHOCOLATE = 20,
    CAKE = 10
};

class Item{
    private:
    string name;
    string price;
    public:
    Item(string name,string price){
        this.name = name;
        this.price = price;
    }
    public string getName() {
          return this.name;
    }

    public int getPrice() {
        return this.price;
    }
};
}
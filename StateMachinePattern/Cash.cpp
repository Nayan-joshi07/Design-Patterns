#include<iostream>
using namespace lld{
enum CashType{
    ONE = 1,
    TWO = 2,
    FIVE = 5,
    TEN = 10,
    TWENTY = 20
};
class Cash{
    private:
    int value;
    public:
    Cash(int value){
        this.value = value;
    }
    
    int getCashValue(){
        return value;
    }
};
}
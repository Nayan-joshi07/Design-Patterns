#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
using namespace lld{
class CashInventroy{
    private:
    unordered_map<CashType,int> cashStorage = new unordered_map<Cash,int>();
    public:
    CashInventroy(){
        
    }

    void addCash(CashType cash){
        this.cashStorage[cash]++;
    }

    void deductCash(CashType cash){
        int value = cashStorage[cash];
        if(value>0){
            cashStorage[cash]--;
        }
    }

    vector<int> getChange(int remainingBalance){
        vector<CashType> change = new vector<int>();
        int balance = remainingBalance;
        while(balance>0){
            if(balance>CashType.TWENTY && cashStorage[CashType.TWENTY]>0){
                change.push_back(CashType.TWENTY);
                remainingBalance -= CashType.TWENTY;
            }
            else if(balance>CashType.TEN && cashStorage[CashType.TEN]>0){
                change.push_back(CashType.TEN);
                remainingBalance -= CashType.TEN;
            }
            else if(balance>CashType.FIVE && cashStorage[CashType.FIVE]>0){
                change.push_back(CashType.FIVE);
                remainingBalance -= CashType.FIVE;
            }
            else if(balance>CashType.TWO && cashStorage[CashType.TWO]>0){
                change.push_back(CashType.TWO);
                remainingBalance -= CashType.TWO;
            }
            else if(balance>CashType.ONE && cashStorage[CashType.ONE]>0){
                change.push_back(CashType.ONE);
                remainingBalance -= CashType.ONE
            }
            else {
                return null;
            }
        }
    }
 };
}
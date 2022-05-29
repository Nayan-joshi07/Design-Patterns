#include<iostream>
#include<string>
using namespace std;
class VendingMachineState{
    private:
    string state;
    public:
    VendingMachineState(string state){
        this.state = state;
    }

    public void insertCash(Cash cash){
        cout<<"Vendion Machine is in this " + state + "Unable to dispense the Cash";
    }

    public void selectItem(int itemCode){
        cout<<"Vending Machine is in this" + state + "Unable to Select the Item";
    }

    public void processRequest(){
        cout<<"Vending Machine is in this " + state + "Unable to Process the Request";
    }

    public void dispenseItemAndCash(){
        cout<<"Vending Machine is in this" + state + "Unable to Dispense Item and Cash";
    }

    public void cancelRequest(){
        cout<<"Vending Machine is in this "+ state +"Unable to Cancel Requests ";
    }
};
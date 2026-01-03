#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string accountHolderName;
    string accountNumber;
    double balance;
   
    public:
    BankAccount(){
        accountHolderName = "Guest";
        accountNumber = "000-000";
        balance = 0.0;
    }
   
    BankAccount(string name, string num, double initialDeposit){
        accountHolderName = name;
        accountNumber = num;
       
        if(initialDeposit<0){
            balance = 0.0;
            cout<<"Error: Insufficient Balance.";
        }
       
        else{
            balance = initialDeposit;
        }
        cout<<"Account for "<<name<<" created."<<endl;
    }
   
   
    ~BankAccount(){
        cout<<"Closing Account "<<accountNumber<<endl;
    }
   
    void deposit(double amount){
       if(amount>=0){
            balance += amount;
        }
       
        else{
            cout<<"Invalid Deposit: Enter a Positive Value.";
        }
     
}

void withdraw(double amount){
    if(amount>0){
    if(balance - amount >=0){
        cout<<"Withdrawl was Successful.";
        balance = balance - amount;
        cout<<"New Balance will be "<<balance<<endl;
    }
   
    else if(balance - amount < 0){
        cout<<"Error: Insufficient Balance."<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }
    }
    else if(amount<0){
        cout<<"Error: Please Enter a Positive Value."<<endl;
    }
}

void display(){
    cout<<"Account Holder's Name: "<<accountHolderName<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: "<<balance<<endl;
}
};
int main(){
    cout<<"Creating Account 1:"<<endl;
    BankAccount acc1("Aditya", "1234", 500);
    acc1.display();
    cout<<"Creating Account 2: "<<endl;
    BankAccount acc2;
    acc2.display();
   
    acc1.deposit(100);
    acc1.withdraw(300);
   
    acc2.deposit(50);
   
    acc1.display();
    acc2.display();
   
    return 0;
}

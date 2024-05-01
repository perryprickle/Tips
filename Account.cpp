//Bank Account Management System
//You're tasked with creating a simple bank account management system in C++. 
//Design a class called BankAccount to represent a bank account, with the following specifications:
//Member Variables:
//accountNumber: An integer representing the unique account number.
//accountHolderName: A string representing the name of the account holder.
//balance: A double representing the current balance in the account.
//Constructor:
//Define a constructor that initializes the accountNumber, accountHolderName, and balance when an object of the BankAccount class is created.
//Member Functions:
//deposit(double amount): A function that takes a double parameter amount and adds it to the account's balance.
//withdraw(double amount): A function that takes a double parameter amount and subtracts it from the account's balance.
// Ensure that the withdrawal amount does not exceed the current balance.
//displayAccountDetails(): A function that displays the account details including the account number, account holder name, and current balance.
//Sample Usage:
//Create objects of the BankAccount class and demonstrate the functionality by depositing and withdrawing amounts from the accounts, and displaying their details.
//Implement the BankAccount class with the specified member variables and functions, and provide a sample usage of the class to demonstrate its functionality.

#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
   
    BankAccount(int accNumber, string accHolderName, double initialBalance)
	 {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    void deposit(double amount)
	 {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    void withdraw(double amount) 
	{
        if (balance >= amount)
		 {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else
		 {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }

    void displayAccountDetails() 
	{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main()
 {
    
    BankAccount acc1(123456, "John Doe", 1000);
    BankAccount acc2(987654, "Jane Smith", 500);

   
    acc1.deposit(200);
    acc1.withdraw(50);

    acc2.deposit(100);
    acc2.withdraw(600); 

    cout << "\nAccount 1 Details:" << endl;
    acc1.displayAccountDetails();

    cout << "\nAccount 2 Details:" << endl;
    acc2.displayAccountDetails();

    return 0;
}



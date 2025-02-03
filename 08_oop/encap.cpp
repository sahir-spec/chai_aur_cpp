#include <iostream>
using namespace std;

class bankAccount
{
private:
    string accNumber;
    double balance;

public:
    bankAccount(string accNum, double iniBalance)
    {
        accNumber = accNum;
        balance = iniBalance;
    }

    void disBankAcc()
    {
        cout << "Account: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit Amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit Ammout" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw Amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdraw amount" << endl;
        }
    }
};

int main()
{
    bankAccount myAcc("18158", 500);
    myAcc.disBankAcc();
    myAcc.getBalance();
    myAcc.deposit(200);
    myAcc.withdraw(100);
    return 0;
}
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "InsuAicient balance." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: " << balance;
    }
};
int main()
{
    BankAccount b;
    double amount;

    b.createAccount();

    cout << "Enter deposit amount: ";
    cin >> amount;
    b.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    b.withdraw(amount);

    b.display();

    return 0;
}
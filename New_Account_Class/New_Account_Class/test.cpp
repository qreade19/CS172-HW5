#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Account account1("George", 1122, 1000);
	account1.deposit(30);
	account1.deposit(40);
	account1.deposit(50);
	account1.withdraw(5);
	account1.withdraw(4);
	account1.withdraw(2);
	cout << "Account Summary: " << endl;
	cout << "Name: " << account1.getName() << endl;
	cout << "Annual Interest Rate: " << account1.getAnnualInterestRate() << endl;
	cout << "Monthly Interest Rate: " << account1.getMonthlyInterestRate() << endl;
	cout << "Current Balance: " << account1.getBalance() << endl;
	cout << "Transactions: ";
	for (int i = 0; i < account1.transactions.size(); i++)
	{
		account1.transactions[i];
	}
}
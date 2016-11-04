#include <iostream>
#include <string>
#include <ctime>
#include "Account.h"
using namespace std;

double Account::annualInterestRate = 1.5;
Account::Account()
{
	id = 0;
	balance = 0;
}

Account::Account(string newName, int newId, double newBalance)
{
	name = newName;
	id = newId;
	balance = newBalance;
}

int Account::getId()
{
	return id;
}

double Account::getBalance()
{
	return balance;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

string Account::getName()
{
	return name;
}

//int Account::getSize()
//{
	//return transactions.size;
//}

// Account::getTransactions(int index)
//{
	//return transactions[index];
//}

// You can see what I was trying to do here, but I just couldn't figure it out.

void Account::setId(int id)
{
	this->id = id;
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
	this->annualInterestRate = annualInterestRate;
}

void Account::setName(string name)
{
	this->name = name;
}

double Account::getMonthlyInterestRate()
{
	double monthly = annualInterestRate / 12;
	return monthly;
}

void Account::withdraw(double amount)
{
	balance = balance - amount;

	string temp = "Withdrawal via ATM";
	transactions.push_back(Transaction('W', amount, balance, temp));
}

void Account::deposit(double amount)
{
	balance = balance + amount;

	string temp = "Deposit via ATM";
	transactions.push_back(Transaction('D', amount, balance, temp));
}

Date::Date()
{
	int temp = time(0);
	while (temp > 43200)
	{
		day++;
		if (day > 31)
		{
			day = 1;
			month++;
			if (month > 12)
			{
				month = 1;
				year++;
			}
		}
		temp - 43200;
	}
}

Date::Date(int elapsedTime)
{
	int temp = elapsedTime;
	while (temp > 43200)
	{
		day++;
		if (day > 31)
		{
			day = 1;
			month++;
			if (month > 12)
			{
				month = 1;
				year++;
			}
		}
		temp - 43200;
	}
}

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

void Date::setDate(int elapseTime)
{
	int temp = elapseTime;
	while (temp > 43200)
	{
		day++;
		if (day > 31)
		{
			day = 1;
			month++;
			if (month > 12)
			{
				month = 1;
				year++;
			}
		}
		temp - 43200;
	}
}

Transaction::Transaction(char type, double amount, double balance, string description)
{
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
}

char Transaction::getType()
{
	return type;
}

double Transaction::getAmount()
{
	return amount;
}

double Transaction::getBalance()
{
	return balance;
}

string Transaction::getDescription()
{
	return description;
}

void Transaction::setType(char type)
{
	this->type = type;
}

void Transaction::setAmount(double amount)
{
	this->amount = amount;
}

void Transaction::setBalance(double balance)
{
	this->balance = balance;
}

void Transaction::setDescription(string description)
{
	this->description = description;
}
#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int elapsedTime);
	Date(int year, int month, int day);
	int getYear();
	int getMonth();
	int getDay();
	void setDate(int elapseTime);
};

class Transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction(char type, double amount, double balance, string description);
	char getType();
	double getAmount();
	double getBalance();
	string getDescription();
	void setType(char type);
	void setAmount(double amount);
	void setBalance(double balance);
	void setDescription(string description);
};

class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	//vector<Transaction> transactions; I understand that this is where it should be, as a data field, but I couldn't find a way to use it from here.
public:
	Account();
	Account(string newName, int newId, double newBalance);
	int getId();
	double getBalance();
	double getAnnualInterestRate();
	string getName();
	//int getSize();
	//getTransactions(int index); These were my attempts at creating get functions for the vector, but I couldn't find a suitable data type for the actual transactions
	void setId(int id);
	void setBalance(double balance);
	void setAnnualInterestRate(double annualInterestRate);
	void setName(string name);
	double getMonthlyInterestRate();
	void withdraw(double amount);
	void deposit(double amount);
	vector<Transaction> transactions; // In the end, it ended up down here.
};

#endif
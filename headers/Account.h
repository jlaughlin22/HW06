#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <vector>
#include <sstream>
#include "Customer.h"
#include "Senior.h"
#include "Student.h"
#include "Adult.h"
#include "Transaction.h"

/**
The Bank has Accounts and an Account belongs to a Customer.
Additionally, there are specialized types of accounts: Checking_Account and Savings_Account.
Checking_Account and Savings_Account have specialized ways of adding interest, and describing itself.

@author: Ed Walker
*/

class Account {
protected:
	Customer *customer;		// The customer who owns this account
	double balance;			// The available balance in this account
	int account_number;		// A unique number identifying this account
	std::vector<Transaction *> transactions;  // The record of transactions that have occured with this account

	/**
	Describe fees associated with the customer who owns this account.
	The fee will depend on the specific type of customer.
	@return string showing checking and overdraft fees
	*/
	std::string get_fees()
	{
		std::cout << "TEST\n";
		int overdraft, charge;
		if(customer->get_cust_type() == "senior"){
			charge = dynamic_cast<Senior*>(customer)->get_check_charge();
			overdraft = dynamic_cast<Senior*>(customer)->get_overdraft();
		}else if(customer->get_cust_type() == "adult"){
			charge = dynamic_cast<Adult*>(customer)->get_check_charge();
			overdraft = dynamic_cast<Adult*>(customer)->get_overdraft();
		}else if( customer->get_cust_type() == "student"){
			charge = dynamic_cast<Student*>(customer)->get_check_charge();
			overdraft = dynamic_cast<Student*>(customer)->get_overdraft();
		}
		std::stringstream ss;
		std::cout << "Check Charge: $" << charge << " Overdraft Fee: $" << overdraft;
		ss << "Check Charge: $" << charge << " Overdraft Fee: $" << overdraft;
		return ss.str();
	}

protected:
	/**
	Add interest based on a specified interest rate to account
	@param interest	The interest rate
	*/
	void add_interest(double interest) {
		double amt = balance*interest;
		balance = balance + amt;
		std::cout << "TEST\n";
		std::string fees = get_fees();
		Transaction *tran = NULL;
		tran = new Transaction(account_number, "Interest", amt, fees);
		transactions.push_back(tran);
	}

public:
	/**
	Constructor requires a customer to create an account
	Balance always starts with 0 when account is created.
	*/
	Account(Customer *cust, int id) : customer(cust), account_number(1000), balance(0) {}

	int idNum(){
		std::string hold = std::to_string((rand()%9)+1);
		hold += std::to_string(rand()%10);
		hold += std::to_string(rand()%10);
		hold += std::to_string(rand()%10);
		hold += std::to_string(rand()%10);
		hold += std::to_string(rand()%10);
		hold += std::to_string(rand()%10);
		hold += std::to_string(rand()%10);
		return std::stoi(hold,nullptr);
	}
	/**
	Generic accesser and setter methods for properties customer, balance, and account_number
	*/

	Customer *get_customer() {
		return customer;
	}

	void set_customer(Customer *cust) {
		customer = cust;
	}

	int get_account() {
		return account_number;
	}

	void set_balance(double new_balance) {
		balance = new_balance;
	}

	void set_account(int account_number) {
		this->account_number = account_number;
	}

	double get_balance() {
		return balance;
	}

	/**
	Generic method describing the account information.

	Remember that you will need to indicate if an account is Savings or Checking in 
	an overridden version of to_string() in the derived classes. 

	@return string describing generic information about the account
	*/
	virtual std::string to_string() {
		std::stringstream ss; // for composing the string that describes this account
		ss << "Name: " << customer->get_name() << std::endl;
		ss << " Age: " << customer->get_age() << std:: endl;
		ss << " Address: " << customer->get_address() << std::endl;
		ss << " Telephone Number: " << customer->get_telephone_number() << std::endl;
		ss << "  Balance: " << balance << std::endl;
		ss << "  Account ID: " << account_number << std::endl;
		return ss.str();
	}

	/**
	Deposits amount into account
	@param amt The deposit amount
	*/
	void deposit(double amt) {
		std::cout << balance << std::endl;
		balance += amt;
		std::string fees = get_fees();
		std::cout << "test";
		Transaction *tran = NULL;
		tran = new Transaction(account_number, "Deposit", amt, fees);
		transactions.push_back(tran);
		add_interest();
	}

	/**
	Withdraws amount from account
	@param amt The withdrawal amount
	*/
	virtual void withdraw(double amt) {
		std::cout << "TEST\n";
		balance -= amt;
		std::string fees = get_fees();
		Transaction *tran = NULL;
		tran = new Transaction(account_number, "Withdrawal", amt, fees);
		transactions.push_back(tran);
		add_interest();
	}

	// We want the Savings_Account and Checking_Account to implement this.
	virtual void add_interest() = 0;

};
#endif
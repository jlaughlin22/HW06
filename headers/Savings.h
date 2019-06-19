#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"
#include "Customer.h"

class Savings_Account: public Account{
    public:
    Savings_Account(Customer *cust, int id): Account(cust, id){}

    void add_interest(){
        Account::add_interest(Account::customer->get_savings_interest());
    }
};
#endif // SAVINGS_ACCOUNT_H
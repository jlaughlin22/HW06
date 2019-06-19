#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include "Customer.h"

class Checking_Account: public Account{
    public:
    //constructor
    Checking_Account(Customer *cust, int id): Account(cust, id){}

    //add interest to account
    void add_interest(){
        Account::add_interest(Account::customer->get_check_interest());
    }
};

#endif // CHECKING_ACCOUNT_H
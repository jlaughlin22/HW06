#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include "Customer.h"

class Checking_Account: public Account{
    public:
    Checking_Account(Customer *cust, int id): Account(cust, id){}

    void add_interest(){

    }
};

#endif // CHECKING_ACCOUNT_H
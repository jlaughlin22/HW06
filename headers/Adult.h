#ifndef ADULT_H
#define ADULT_H
#include "Customer.h"

class Adult: public Customer{
    private:
    const double SAVINGS_INTEREST;
    const double CHECK_INTEREST;
    const double CHECK_CHARGE;
    const double OVERDRAFT_PENALTY;
    public:

    Adult(std::string name, std::string address, std::string telephone_number, int age, int customer_number): 
        Customer(name, address, telephone_number, age, customer_number, "adult"),
        SAVINGS_INTEREST(3.2),
        CHECK_INTEREST(4.65),
        CHECK_CHARGE(32),
        OVERDRAFT_PENALTY(30) {}

    double get_check_charge(){
        return CHECK_CHARGE;
    }
    double get_overdraft(){
        return OVERDRAFT_PENALTY;
    }
    double get_savings_interest(){
        return SAVINGS_INTEREST;
    }
    double get_check_interest(){
        return CHECK_INTEREST;
    }
};
#endif
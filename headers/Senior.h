#ifndef SENIOR_H
#define SENIOR_H
#include "Customer.h"

class Senior: public Customer{
    private:
    const double SAVINGS_INTEREST;
    const double CHECK_INTEREST;
    const double CHECK_CHARGE;
    const double OVERDRAFT_PENALTY;
    public:
    Senior(std::string name, std::string address, std::string telephone_number, int age, int customer_number): 
        Customer(name, address, telephone_number, age, customer_number, "senior"), 
        SAVINGS_INTEREST(8.5),
        CHECK_INTEREST(4.00),
        CHECK_CHARGE(27.00),
        OVERDRAFT_PENALTY(30.00) {}

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
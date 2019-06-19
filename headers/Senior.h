#ifndef SENIOR_H
#define SENIOR_H
#include "Customer.h"

class Senior: public Customer{
    private:
    const double SAVINGS_INTEREST;//interest on savings
    const double CHECK_INTEREST;//interest on checking
    const double CHECK_CHARGE;//charge for check
    const double OVERDRAFT_PENALTY;//everdraft penalty
    public:
    //constructor
    Senior(std::string name, std::string address, std::string telephone_number, int age, int customer_number): 
        Customer(name, address, telephone_number, age, customer_number, "senior"), 
        SAVINGS_INTEREST(.085),
        CHECK_INTEREST(.040),
        CHECK_CHARGE(27.00),
        OVERDRAFT_PENALTY(30.00) {}

    double get_check_charge(){//accessor for check_charge
        return CHECK_CHARGE;
    }
    double get_overdraft(){//accessor for overdraft
        return OVERDRAFT_PENALTY;
    }
    double get_savings_interest(){//accessor for savings_interest
        return SAVINGS_INTEREST;
    }
    double get_check_interest(){//accessor for check_interest
        return CHECK_INTEREST;
    }
};
#endif
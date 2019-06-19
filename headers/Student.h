#ifndef STUDENT_H
#define STUDENT_H
#include "Customer.h"

class Student: public Customer{
    private:
    const double SAVINGS_INTEREST;//interest on savings
    const double CHECK_INTEREST;//interest on checking
    const double CHECK_CHARGE;//charge for check
    const double OVERDRAFT_PENALTY;//everdraft penalty
    public:
    //constructor
    Student(std::string name, std::string address, std::string telephone_number, int age, int customer_number): 
        Customer(name, address, telephone_number, age, customer_number, "student"),
        SAVINGS_INTEREST(.050),
        CHECK_INTEREST(.0306),
        CHECK_CHARGE(35),
        OVERDRAFT_PENALTY(30) {}

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
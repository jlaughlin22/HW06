#ifndef STUDENT_H
#define STUDENT_H
#include "Customer.h"

class Student: public Customer{
    private:
    const double SAVINGS_INTEREST;
    const double CHECK_INTEREST;
    const double CHECK_CHARGE;
    const double OVERDRAFT_PENALTY;
    public:
    Student(std::string name, std::string address, std::string telephone_number, int age, int customer_number): 
        Customer(name, address, telephone_number, age, customer_number, "student"),
        SAVINGS_INTEREST(5.0),
        CHECK_INTEREST(3.06),
        CHECK_CHARGE(35),
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
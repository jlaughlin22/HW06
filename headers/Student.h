#ifndef STUDENT_H
#define STUDENT_H
#include "Customer.h"

class Student: public Customer{
    private:
    const std::string SAVINGS_INTEREST;
    const std::string CHECK_INTEREST;
    const std::string CHECK_CHARGE;
    const std::string OVERDRAFT_PENALTY;
    public:
    Student(std::string name, std::string address, std::string telephone_number, int age, int customer_number): Customer(name, address, telephone_number, age, customer_number){}


};
#endif
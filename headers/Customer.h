#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer
{
    private:
    std::string name;//name of customer
    std::string address;//address of customer
    std::string telephone_number;//telephone number of customer
    int age;//age of customer
    int customer_number;//thier id number
    std::string cust_type;//type of customer ie senior student adult

    public:
    //constructor
    Customer(std::string name, std::string address, std::string telephone_number, int age, int customer_number){
        this->name = name;
        this->address = address;
        this->telephone_number = telephone_number;
        this->age = age;
        this->customer_number = customer_number;
    }
    //constructor
    Customer(std::string name, std::string address, std::string telephone_number, int age, int customer_number, std::string cust_type){
        this->name = name;
        this->address = address;
        this->telephone_number = telephone_number;
        this->age = age;
        this->customer_number = customer_number;
        this->cust_type = cust_type;
    }

    //accesor methods/modify methods

    std::string get_name(){
        return name;
    }

    std::string get_address(){
        return address;
    }

    int get_age(){
        return age;
    }

    std::string get_telephone_number(){
        return telephone_number;
    }

    int get_customer_number(){
        return customer_number;
    }
    
    std::string get_cust_type(){
        return cust_type;
    }

    void set_name(std::string name){
        this->name = name;        
    }

    void set_address(std::string address){
        this->address = address;
    }

    void set_age(int age){
        this->age = age;
    }

    void set_telephone_number(std::string telephone_number){
        this->telephone_number = telephone_number;
    }

    void set_customer_number(int customer_number){
        this->customer_number = customer_number;
    }
    //virtual methods
    virtual double get_check_charge() = 0;
    virtual double get_overdraft() = 0;
    virtual double get_savings_interest() = 0;
    virtual double get_check_interest() = 0;

};


#endif
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
class Customer // FIXME: Complete the implementation!
{
    private:
    std::string name;
    std::string address;
    std::string telephone_number;
    int age;
    std::string cust_type;
    std::string customer_number;

    public:
    Customer(std::string name, std::string address, std::string telephone_number, int age, std::string cust_type, int customer_number){
        this->name = name;
        this->address = address;
        this->telephone_number = telephone_number;
        this->age = age;
        this->cust_type = cust_type;
        this->customer_number = customer_number;
    }

    string getCustType(){
        return cust_type;
    }

    string get_name(){
        return name;
    }

    string get_address(){
        return address;
    }

    int get_age(){
        return age;
    }

    string get_telephone_number(){
        return telephone_number;
    }

    string get_customer_number(){
        return customer_number;
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

    void set_cust_type(std::string cust_type){
        this->cust_type = cust_type;
    }

    void set_customer_number(int customer_number){
        this->customer_number = customer_number;
    }
};


#endif
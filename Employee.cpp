//
//  Employee.cpp
//  employees_project
//
//  Created by Raza Rauf on 2015-05-14.
//  Copyright (c) 2015 Raza Rauf. All rights reserved.
//

#include "Employee.h"

//Default constructor
//Creates amd initializes values for name and phone
employee::employee()
{
    name="\0";
    phone='\0';
}

//Sets the argument passed to the name data member
void employee::setName(string n1)
{
    name=n1;
}

//Sets the argument passed to the phone data member
void employee::setPhone(string  n1)
{
    phone=n1;
}

//Displays the name data member to screen
void employee::displayName()
{
    cout << name;
}

//Displays the phone data member to screen
void employee::displayPhone()
{
    cout << phone;
}

//Operator overloaded function that returns true if the caller's
//name is smaller than the passed argument's name, else returns false
bool employee::operator < (const employee& e1)
{
    return(name < e1.name);
}

//Operator overloaded function that returns the name of the employee object,
//passed as an argument, as an ostream
ostream& operator << (ostream& out, const employee& e1)
{
    out << e1.name << endl;
    return out;
}

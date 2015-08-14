//
//  Employee.h
//  employees_project
//
//  Created by Raza Rauf on 2015-05-14.
//  Copyright (c) 2015 Raza Rauf. All rights reserved.
//

#ifndef __employees_project__EMPLOYEE__
#define __employees_project__EMPLOYEE__

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class employee
{
private:
    string name;
    string phone;
    
public:
    employee();
    void setName(string n1);
    void setPhone(string  n1);
    void displayName();
    void displayPhone();
    bool operator < (const employee&);
    //string operator << ();
    friend ostream& operator << (ostream& out, const employee& e1);
    
};
#endif /* defined(__employees_project__Employee__) */

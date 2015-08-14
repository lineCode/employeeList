//
//  main.cpp
//  employees_project
//
//  Created by Raza Rauf on 2015-05-14.
//  Copyright (c) 2015 Raza Rauf. All rights reserved.
//

#include "IndexList.h"
#include "Employee.h"

const int N=10;

int main ()
{
    indexList<employee, N> myEmployeeList;
    employee e1;
    string eName;
    int noe;
    string phNum1, phNum2, phNum;
    
    cout << "List of type \"Employee\""<<endl;
    cout << "Enter the number of employees: ";
    cin >> noe;
    for (int i=0; i<noe; i++)
    {
        cout << "Enter the next name: ";
        cin >> eName;
        e1.setName(eName);
        cout << "Enter the next phone number: ";
        getline(cin, phNum1, '-');
        getline(cin, phNum2, '\n');
        phNum=phNum1+phNum2;
        e1.setPhone(phNum);
        myEmployeeList.append(e1);
    }
    myEmployeeList.selSort();
    cout << "Employee list sorted in ascending order" << endl;
    myEmployeeList.display();
    return 0;
}
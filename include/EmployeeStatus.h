#ifndef EMPLOYEESTATUS_H
#define EMPLOYEESTATUS_H

#include <string>
#include "Employee.h"

std::string toString(Employee::Role role);
std::string toString(Employee::EmployeeStatus status);
std::string toString(Employee::EmploymentType type);
double getRateForRole(Employee::Role role);

Employee::Role operator++(Employee::Role& role, int);

#endif //EMPLOYEESTATUS_H

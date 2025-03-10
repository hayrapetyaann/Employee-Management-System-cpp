#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>
#include "Employee.h"

bool validateInput(const std::string& input);
Employee* searchEmployeeByID(const std::vector<Employee*>& employees, const std::string& employeeID);
Employee* searchEmployeeByName(const std::vector<Employee*>& employees, const std::string& name);
std::string formatDisplay(const Employee& employee);

#endif // UTILITY_H

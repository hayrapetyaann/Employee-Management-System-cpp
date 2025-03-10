#include "include/Utility.h"
#include "include/EmployeeStatus.h"
#include <iostream>
#include <sstream>
#include <limits>

bool validateInput(const std::string& input) {
    std::stringstream ss(input);
    double number;
    ss >> number;
    if (ss.fail() || ss.rdbuf()->in_avail() != 0) {
        std::cout << "Invalid input. Please enter a valid number.\n";
        return false;
    }
    return true;
}

Employee* searchEmployeeByID(const std::vector<Employee*>& employees, const std::string& employeeID) {
    for (auto& emp : employees) {
        if (emp->getEmployeeID() == employeeID) {
            return emp;
        }
    }
    return nullptr;
}

Employee* searchEmployeeByName(const std::vector<Employee*>& employees, const std::string& name) {
    for (auto& emp : employees) {
        if (emp->getName() == name) {
            return emp;
        }
    }
    return nullptr;
}

std::string formatDisplay(const Employee& employee) {
    std::stringstream ss;
    ss << "Employee ID: " << employee.getEmployeeID() << "\n"
       << "Name: " << employee.getName() << "\n"
       << "Base Salary: " << employee.getBaseSalary() << "\n"
       << "Role: " << toString(employee.getRole()) << "\n"
       << "Status: " << toString(employee.getEmployeeStatus()) << "\n"
       << "Employment Type: " << toString(employee.getEmploymentType()) << "\n"
       << "Rate: " << employee.getRate() << "\n";
    return ss.str();
}

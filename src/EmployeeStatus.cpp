#include "include/EmployeeStatus.h"
#include "include/Employee.h"
#include <iostream>
#include <stdexcept>

std::string toString(Employee::Role role) {
    switch (role) {
        case Employee::Role::Intern: return "Intern";
        case Employee::Role::Junior: return "Junior";
        case Employee::Role::Middle: return "Middle";
        case Employee::Role::Senior: return "Senior";
        default: return "Unknown";
    }
}

std::string toString(Employee::EmployeeStatus status) {
    switch (status) {
        case Employee::EmployeeStatus::Active: return "Active";
        case Employee::EmployeeStatus::OnLeave: return "On Leave";
        case Employee::EmployeeStatus::Inactive: return "Inactive";
        case Employee::EmployeeStatus::Retired: return "Retired";
        default: return "Unknown";
    }
}

std::string toString(Employee::EmploymentType type) {
    switch (type) {
        case Employee::EmploymentType::FullTime: return "Full-Time";
        case Employee::EmploymentType::PartTime: return "Part-Time";
        default: return "Unknown";
    }
}



double getRateForEmployee(Employee::Role role) {
    switch (role) {
        case Employee::Role::Intern: return 1.0;
        case Employee::Role::Junior: return 1.2;
        case Employee::Role::Middle: return 1.5;
        case Employee::Role::Senior: return 2.0;
        default: throw std::invalid_argument("Unknown Employee::Role");
    }
}

Employee::Role operator++(Employee::Role& role, int) {
    switch (role) {
        case Employee::Role::Intern: return role = Employee::Role::Junior;
        case Employee::Role::Junior: return role = Employee::Role::Middle;
        case Employee::Role::Middle: return role = Employee::Role::Senior;
        case Employee::Role::Senior: return role;  
        default: throw std::invalid_argument("Unknown rolee");
    }       
}

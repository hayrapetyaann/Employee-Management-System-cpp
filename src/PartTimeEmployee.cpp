#include "include/PartTimeEmployee.h"
#include <iostream>

PartTimeEmployee::PartTimeEmployee(std::string id, std::string name, double hourlyWage, double hoursWorked, Role role) 
            : Employee(id, name, 0, role, EmploymentType::PartTime), m_hourlyWage(hourlyWage), m_hoursWorked(hoursWorked) {}

double PartTimeEmployee::calculateSalary() {
    return m_hoursWorked * m_hourlyWage * m_rate;
}

void PartTimeEmployee::promote() {
    Employee::promote();
}

void PartTimeEmployee::displayDetails() const {
    std::cout << "Part-Time Employee - ";
    Employee::displayDetails();
    std::cout << "Hours Worked: " << m_hoursWorked << ", Hourly Wage: " << m_hourlyWage << std::endl;
}

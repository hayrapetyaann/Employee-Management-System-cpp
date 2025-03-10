#include "include/Employee.h"
#include <iostream>
#include "include/EmployeeStatus.h"

Employee::Employee(std::string id, std::string name, double baseSalary, Role role, EmploymentType employmentType) 
            : m_employeeID(id), m_name(name), m_baseSalary(baseSalary), m_role(role), m_employmentType(employmentType), m_rate(1.0) {}


Employee::~Employee() {}

double Employee::calculateSalary() {
    return m_baseSalary * m_rate;
}

void Employee::promote() {
    m_role++;
    m_rate = getRateForRole(m_role);
}

void Employee::displayDetails() const {
    std::cout << "Name: " << m_name 
              << "\nEmployeeID: " << m_employeeID 
              << "\nRate: " << m_rate
              << "\nRole: " << static_cast<int>(m_role) 
              << "\nStatus: " << static_cast<int>(m_employeeStatus) 
              << "\nEmployment Type: " << (m_employmentType == EmploymentType::FullTime ? "Full-Time" : "Part-Time");
}

void Employee::updateStatus(EmployeeStatus newStatus) {
    m_employeeStatus = newStatus;
}

void Employee::updateRole(Role newRole) {
    m_role = newRole;
}


std::string Employee::getEmployeeID() const {
    return m_employeeID;
}

std::string Employee::getName() const {
    return m_name;
}

double Employee::getBaseSalary() const {
    return m_baseSalary;
}

Employee::Role Employee::getRole() const {
    return m_role;
}

Employee::EmploymentType Employee::getEmploymentType() const {
    return m_employmentType;
}

Employee::EmployeeStatus Employee::getEmployeeStatus() const {
    return m_employeeStatus;
}

double Employee::getRate() const {
    return m_rate;
}

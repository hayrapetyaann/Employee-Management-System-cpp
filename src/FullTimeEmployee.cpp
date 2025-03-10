#include "include/FullTimeEmployee.h"
#include <iostream>

FullTimeEmployee::FullTimeEmployee(std::string id, std::string name, double salary, Role role)
    : Employee(id, name, salary, role, EmploymentType::FullTime) {}

double FullTimeEmployee::calculateSalary() {
    return m_baseSalary * m_rate;
}
    
void FullTimeEmployee::promote() {
    Employee::promote();
}

void FullTimeEmployee::displayDetails() const {
    std::cout << "Full-Time Employee - ";
    Employee::displayDetails();
    std::cout << "Benefits: Health Insurance, Gym Membership, Paid Time Off" << std::endl;
    std::cout << m_healthInsuranceBenefits << " " << m_gymMembershipBenefits << " " << m_paidTimeOffBenefits << " ";
}

double FullTimeEmployee::getHealthInsuranceBenefits() const {
    return m_healthInsuranceBenefits;
}

double FullTimeEmployee::getGymMembershipBenefits() const {
    return m_gymMembershipBenefits;
}

double FullTimeEmployee::getPaidTimeOffBenefits() const {
    return m_paidTimeOffBenefits;
}

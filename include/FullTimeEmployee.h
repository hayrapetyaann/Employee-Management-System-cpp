#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "include/Employee.h"
#include <string>

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(std::string id, std::string name, double salary, Role role);
    double calculateSalary() override; 
    void promote() override;
    void displayDetails() const override; 
private:
    double m_healthInsuranceBenefits;
    double m_gymMembershipBenefits;
    double m_paidTimeOffBenefits;
};


#endif // FULLTIMEEMPLOYEE_H
 

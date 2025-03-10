#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "include/Employee.h"

class PartTimeEmployee : public Employee {
public:
    PartTimeEmployee(std::string id, std::string name, double hourlyWage, double hoursWorked, Role role);

    double calculateSalary() override;
    void promote() override;
    void displayDetails() const override;
private:
    double m_hourlyWage;
    double m_hoursWorked;
};


#endif // PARTTIMEEMPLOYEE_H

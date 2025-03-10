#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    enum class Role { Intern, Junior, Middle, Senior };
    enum class EmploymentType { FullTime, PartTime };
    enum class EmployeeStatus { Active, OnLeave, Inactive, Retired };

    Employee(std::string id, std::string name, double baseSalary, Role role, EmploymentType employmentType);
    virtual double  calculateSalary(); 
    virtual void promote();
    virtual void displayDetails() const;
    void updateStatus(EmployeeStatus newStatus);
    void updateRole(Role newRole);
    std::string getEmployeeID() const;
    std::string getName() const;
    double getBaseSalary() const;
    Role getRole() const;
    EmploymentType getEmploymentType() const;
    EmployeeStatus getEmployeeStatus() const;
    double getRate() const;
    virtual ~Employee();
protected:
    std::string m_employeeID;
    std::string m_name;
    double m_baseSalary;
    Role m_role;
    EmploymentType m_employmentType;
    EmployeeStatus m_employeeStatus;
    double m_rate;
};


#endif // EMPLOYEE_H

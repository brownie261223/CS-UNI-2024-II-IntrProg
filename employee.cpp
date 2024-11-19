#include <iostream>
#include "employee.h"

Employee::Employee(string name, TSal salary)
        : m_name(name), m_salary(salary), m_test(30)
{
    m_test = 20;
    cout << "Construyendo " << m_name << " salario: " << m_salary << endl;
}

Employee::Employee(Employee &other)
        : Employee(other.GetName(), other.GetSalary())
{
}

// Employee::Employee(Employee &other){
//     m_name   = other.GetName();
//     m_salary = other.GetSalary();
// }

Employee::~Employee(){
    cout << "Destruyendo: " << GetName() << " salario: " << GetSalary() << endl;
}

void Employee::SetSalary(double _salary){
    m_salary = _salary;
}

ostream &operator<<(ostream &os, Employee &e){
    os << "NameY: " << e.GetName() << " SalarioY: " << e.GetSalary();
    return os;
}

ostream &operator<<(ostream &os, Employee *pE){
    return os << *pE;
}

void ClassDemo(){
    X     s1;
    s1.var1 = 20;

    Employee a1;
    a1.SetSalary(20);
    auto sal = a1.GetSalary();

    Employee a2("Brad", 1000),
             a3(a2);
    a3.SetSalary(1500);
    cout << "------------------------\n";
    Employee *pEmp = new Employee("Caleb", 700);
    Employee *vEmpl = new Employee[3];
    vEmpl[0].SetName("Juan");
    vEmpl[0].SetSalary(1000);
    vEmpl[1].SetName("Ernesto");
    vEmpl[1].SetSalary(1200);
    vEmpl[2].SetName("Maria");
    vEmpl[2].SetSalary(1500);

    delete pEmp;
    delete[] vEmpl;  
    pEmp = nullptr;
    vEmpl = nullptr;
    cout << a1 << endl
         << a2 << endl
         << a3 << endl
         << pEmp << endl;
    cout << "========================\n";
    delete pEmp;
    pEmp = nullptr;

    
} // a1, a2, a3 estan saliendo de las {} donde fueron creados

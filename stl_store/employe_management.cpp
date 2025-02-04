#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void disEmp(const Employee& emp)
{
    cout << "ID: " << emp.id << endl
         << "Name: " << emp.name << endl
         << "Salary: $" << emp.salary << endl;
}

double calcTotalSalary(const vector<Employee> &employees)
{
    return accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e)
                      { return sum + e.salary; });
}

double calcAverageSalary(const vector<Employee> &employees)
{
    double totalSal = calcTotalSalary(employees);
    return totalSal / employees.size();
}

Employee findHighestPaid(const vector<Employee> &employees)
{
    return *max_element(employees.begin(), employees.end(), [](const Employee &e1, const Employee& e2)
                        { return e1.salary < e2.salary; });
}

int main()
{
    vector<Employee> employees = {
        {101, "Affan", 100000},
        {102, "Saksham", 30000},
        {103, "Shubham", 40000},
        {104, "Anirudh", 70000},
        {105, "Aryan", 90000},
    };

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employees Sorted by Salary -> Highest to Lowest \n";
    for_each(employees.begin(), employees.end(), disEmp);

    vector<Employee> highEarners;
    copy_if(employees.begin(), employees.end(), back_inserter(highEarners), [](const Employee &e)
            { return e.salary > 50000; });

    cout << "\nEmployees who are high earners \n";
    for_each(highEarners.begin(), highEarners.end(), disEmp);

    double totalSal = calcTotalSalary(employees);
    double avgSal = calcAverageSalary(employees);
    Employee highestPaid = findHighestPaid(employees);

    cout << "\nTotal Salary: $" << totalSal << endl;
    cout << "Average Salary: $" << avgSal << endl;
    cout << "Highest Paid Employee: \n";
    disEmp(highestPaid);

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
struct Employee 
{
    string name;
    int age;
    float salary;
    char gender;
    bool isMarried;
    long phone;
};
int main() 
{
    Employee emp = {"Muneeb", 19, 70000.0, 'M', true, 22108190};

    cout << "Employee details:\n";
    cout << "Name: " << emp.name << " (string)" << endl;
    cout << "Age: " << emp.age << " (int)" << endl;
    cout << "Salary: " << emp.salary << " (float)" << endl;
    cout << "Gender: " << emp.gender << " (char)" << endl;
    cout << "Is Married: " << emp.isMarried << " (bool)" << endl;
    cout << "Phone: " << emp.phone << " (long)" << endl;

    return 0;
}

#include <iostream>
#include <string>

struct Student 
{
    std::string name;
    int age;
    float gpa;
    int reg;
    char gender;
    bool is_enrolled;
};

int main() 
{
    
    Student s = {"Muhammad Muneeb", 19, 3.5,22108190, 'M', true};

    std::cout << "Student name: " << s.name << std::endl;  
    std::cout << "Student age: " << s.age << std::endl;  
    std::cout << "Student GPA: " << s.gpa << std::endl;
	std::cout << "Student Reg No: " << s.reg << std::endl;  
    std::cout << "Student gender: " << s.gender << std::endl;  
    std::cout << "Student enrolled: " << s.is_enrolled << std::endl;  
    std::cout << "Student information: " << s.name << " is a " << s.age << " year old " << s.gender << " with a GPA of " << s.gpa << " with a Reg no of " << s.reg << ". Enrollment status: " << s.is_enrolled << std::endl;  // string concatenation
    return 0;
}

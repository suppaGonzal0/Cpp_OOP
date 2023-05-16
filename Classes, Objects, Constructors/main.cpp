#include <iostream>
using std::string;

class Employee{
    string name;
    int age;
    
    public:
        Employee(string n, int a){
            name = n;
            age = a;
        }
        
        void employeeInfo(){
            std::cout << "Hi my name is " 
            << name << "\nI am " 
            << age << " years old\n";
        }
};

int main() {
    Employee employee1 = Employee("Tommy Angelo", 35);
    
    employee1.employeeInfo();

    return 0;
}

#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void work() = 0;
};

class Employee: AbstractEmployee{
    private:
        string name;
        int age;
    
    public:
        Employee(){}
    
        Employee(string n, int a){
            name = n;
            age = a;
        }
        
        void work(){
            std::cout << "Employee is working!\n";
        }
        
};

class Developer: public Employee{
    string favProgrammingLanguage;
    
    public:
        Developer(string name, int age, string favLan):Employee(name, age){
            favProgrammingLanguage = favLan;
        }
        
        void work(){
            std::cout << "Developer is coding!\n";
        }
};

class Teacher: public Employee{
    string favSubject;
    
    public:
        Teacher(){
            std::cout << "Teacher object created.\n";
        }
        
        void work(){
            std::cout << "Teacher is teaching!\n";
        }
};

int main() {
    Employee employee1 = Employee("Tommy Angelo", 35);
    employee1.work();
    
    Developer dev1 = Developer("Pedro Tech", 23, "JavaScript");
    dev1.work();
    
    Teacher t1;
    t1.work();
    
    return 0;
}

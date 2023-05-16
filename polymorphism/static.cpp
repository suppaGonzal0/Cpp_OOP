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
        
        void work(string lang){
            std::cout << "Developer is coding in " << lang << std::endl;
        }
};


int main() {
    Developer dev = Developer("Pedro Tech", 23, "JavaScript");
    dev.work();
    dev.work("C++");
    
    return 0;
}

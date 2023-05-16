#include <iostream>
using std::string;

class Employee{
    private:
        string name;
        int age;
    
    public:
        Employee(){}
    
        Employee(string n, int a){
            name = n;
            age = a;
        }
        
        virtual void work(){
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
        Teacher(){}
        
        void work(){
            std::cout << "Teacher is teaching!\n";
        }
};

int main() {
    Developer d = Developer("Pedro Tech", 23, "JavaScript");
    Teacher t;
   
   Employee* e1 = &d;
   Employee* e2 = &t;
   
   e1->work();
   e2->work();
    
    return 0;
}

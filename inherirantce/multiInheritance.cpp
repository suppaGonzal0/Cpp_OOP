#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void askForPromotion() = 0;
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
        
        void askForPromotion(){
            if(age > 29){
                std::cout << name << ", you got promoted!\n";
            } else{
                std::cout << "Sorry, " << name << ", no promotion for you.\n";
            }
        }
        
};

class Person{
    public:
        Person(){
            std::cout << "Person object created\n";
        }
};

class Developer: public Employee{
    string favProgrammingLanguage;
    
    public:
        Developer(string name, int age, string favLan):Employee(name, age){
            favProgrammingLanguage = favLan;
        }
};

class Teacher: public Employee, public Person{
    string favSubject;
    
    public:
        Teacher(){
            std::cout << "Teacher object created.\n";
        }
};

int main() {
    Employee employee1 = Employee("Tommy Angelo", 35);
    Employee employee2 = Employee("Vito Scaletta", 27);
    
    employee1.askForPromotion();
    employee2.askForPromotion();
    
    Developer dev1 = Developer("Pedro Tech", 23, "JavaScript");
    
    dev1.askForPromotion();
    
    Teacher t1;
    
    return 0;
}

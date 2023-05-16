#include <iostream>
using std::string;

class Employee{
    private:
        string name;
        int age;
    
    public:
        Employee(string n, int a){
            name = n;
            age = a;
        }
        
        int getAge(){
            return age;
        }
        
        void setAge(int a){
            age = a;
        }
        
        string getName(){
            return name;
        }
        
        void setName(string n){
            name = n;
        }
        
        void employeeInfo(){
            std::cout << "Hi my name is " 
            << name << "\nI am " 
            << age << " years old\n";
        }
        
};

int main() {
    Employee employee1 = Employee("Tommy Angelo", 35);
    
    employee1.setName("Vito Scaletta");
    employee1.setAge(27);
    
    employee1.employeeInfo();

    return 0;
}

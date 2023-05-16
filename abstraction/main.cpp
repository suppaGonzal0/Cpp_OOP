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

int main() {
    Employee employee1 = Employee("Tommy Angelo", 35);
    Employee employee2 = Employee("Vito Scaletta", 27);
    
    employee1.askForPromotion();
    employee2.askForPromotion();
    
    return 0;
}

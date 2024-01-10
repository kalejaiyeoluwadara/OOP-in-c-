#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;

public:
    Person(string name) : name(name) {}

    void shout() {
        cout << "Hello world" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    string logname() {
        return name;
    }
};

// Employee class
class Employee : public Person {
    string department;
public:
    // Explicitly call the Person constructor in the initializer list
    Employee(string name,string department) : Person(name),department(department) {}
    public:
    void setDept(string dept){
        this->department = dept;
    }
    void getDept(){
        cout<<this->department<<endl;
    }
};

int main() {
    Employee e("dara","cs"); // Use the Employee constructor with a name parameter
    cout << e.logname() << endl;
    e.setDept("math");
    e.getDept();
}


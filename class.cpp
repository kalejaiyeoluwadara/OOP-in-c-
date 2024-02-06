#include <iostream>
#include <string>
#include <vector>
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

    virtual void printInfo() {
        cout << "Parent printInfo function" << endl;
    }
};

// Employee class
class Employee : public Person {
    string department;

public:
    Employee(string name, string department) : Person(name), department(department) {}

    void setDept(string dept) {
        this->department = dept;
    }

    void getDept() {
        cout << this->department << endl;
    }

    void printInfo() override {
        cout << "Child printInfo function" << endl;
    }
};

int main() {
    Person p("dara");
    Employee e("dara", "cs");

    vector<Person*> people;  // Use vector of pointers to Person
    people.push_back(&p);
    people.push_back(&e);

     for (size_t i = 0; i < people.size(); ++i) {
        people[i]->printInfo();  // Use pointer to call virtual function
    }
    // Don't forget to delete dynamically allocated objects if you use raw pointers
  
}


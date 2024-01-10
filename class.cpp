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
public:
    // Explicitly call the Person constructor in the initializer list
    Employee(string name) : Person(name) {}
};

int main() {
    Employee e("dara"); // Use the Employee constructor with a name parameter
    cout << e.logname() << endl;
}


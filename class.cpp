#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void printProfile(){
        cout<<name<<" is " <<age<<" years old.\n";
    }
}
int main(){
	Person newperson;
    newperson.name = "dara";
    newperson.age = 12;
    newperson.printProfile();
}

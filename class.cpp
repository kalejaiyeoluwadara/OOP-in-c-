#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
    std::string name;
    public:
    Person(string name):name(name){}
    Person() = default;
    void shout(){
        cout<<"Hello world"<<endl;
    }
    void setName(string name){
    	this->name = name;
	}
	string logname(){
		return name;
	}
};
int main(){
    Person p("dara");
    cout<<p.logname()<<endl;
    Person p3;
}

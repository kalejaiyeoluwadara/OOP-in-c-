#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
    std::string name;
    public:
    void shout(){
        cout<<"Hello world"<<endl;
    }
    void setName(string name){
    	this->name = name;
	}
	void logname(){
		cout<<name<<endl;
	}
};
int main(){
    Person p;
    p.setName("dara");
    p.logname();
}

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
};
int main(){
    Person p;
    p.shout();
}

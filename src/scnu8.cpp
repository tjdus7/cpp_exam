#include <iostream>
#include<string>

class Person{
    private:
        std::string name; 
        int age;
        
    public:
        Person();
        Person(std::string name, int age);
        void setname(std::string name);
        void setage(int age);
        
        std::string getname();
        int getage();

};

Person :: Person(){
    name = "seoyeon";
    age = 21;
}

Person :: Person(std::string name, int age){
    this -> name = name;
    this -> age = age; 
}
void Person :: setname(std::string name){
    this ->name= name;
}

void Person :: setage(int age){
    this ->age = age;
}
std::string Person :: getname(){
    return name;
}

int Person :: getage(){
    return age;
}

int main(){
    Person person1;
    std::cout << "name:" << person1.getname() << std::endl;
    std::cout << "age:" << person1.getage() << std::endl;

    Person person2("dabin", 21);
    std::cout << "name: " << person2.getname() << std::endl;
    std::cout << "age: " << person2.getage() << std::endl;

    
    person1.setname("yurim");
    person1.setage(20);
    std::cout << "name: " << person1.getname() << std::endl;
    std::cout << "age: " << person1.getage() << std::endl;

    return 0;
}
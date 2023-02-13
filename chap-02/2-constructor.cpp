#include <iostream>
#include <string>

class Person
{
public:
    std::string get_full_name() const { return  _name + " " + _surname; }
    unsigned int       get_age() const { return _age; }

    Person(const std::string& name, const std::string& surname) 
        : _name {name}
        , _surname {surname}
    {}

    Person()
    {}

    
    void wait(unsigned int years) { _age += years; }

private:
   const std::string  _name;
   const std::string _surname;
    unsigned int _age = 0u;
};

int main()
{
    Person p {"Batman", "Bruce Wayne"};

    //p.set_name("Batman");
    p.wait(23);

    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}

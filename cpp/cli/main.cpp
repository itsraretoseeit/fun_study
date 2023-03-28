#include <string>
#include <iostream>
#include <memory>

class Person {

    public:
        Person(std::string name, int age) : m_name(std::move(name)), m_age(age) {
            std::cout << "Created person( " << m_name << ", " << m_age << ")" << std::endl;
        }
        ~Person() {
            std::cout << "Destroing person( " << m_name << ", " << m_age << ")" << std::endl;
        }

        void print() {
            std::cout << "Person\n\tname: " << m_name << "\n\tage: " << m_age << "\n";
        }
    private:
        std::string m_name;
        int m_age;
};

std::unique_ptr<Person> createPerson() {
    std::string name;
    int age;
    std::cout << "Creating a person\nPlease, provide name: ";
    std::cin >> name;
    std::cout << "Please, provide age: ";
    std::cin >> age;

    return std::make_unique<Person>(name, age);
}

int main() {
    std::unique_ptr<Person> person1 = createPerson();
    std::unique_ptr<Person> person2 = createPerson();
    person1->print();
    person2->print();

    return 0;
}
//#include <string>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Person
//{
//    friend class ResponsiblePerson;
//    int age;
//public:
//    Person(int age) : age(age) {}
//
//    int get_age() const { return age; }
//    void set_age(int age) { this->age = age; }
//
//    string drink() const { return "drinking"; }
//    string drive() const { return "driving"; }
//    string drink_and_drive() const { return "driving while drunk"; }
//};
//
//
//class ResponsiblePerson
//{
//private:
//    Person _person;
//public:
//    ResponsiblePerson(const Person& person) : _person(person) {}
//
//    int get_age() const { return _person.age; }
//    void set_age(int age) { _person.age = age; }
//
//    std::string drink() const
//    {
//       return _person.age >= 18 ? _person.drink() : "too young";
//    }
//
//    std::string drive() const
//    {
//       return _person.age >= 16 ? _person.drive() : "too young";
//    }
//
//    std::string drink_and_drive() const { return "dead"; }
//
//};
//
//int main()
//{
//    ResponsiblePerson* p1 = new ResponsiblePerson{ 15 };
//    ResponsiblePerson* p2 = new ResponsiblePerson{ 17 };
//    ResponsiblePerson* p3 = new ResponsiblePerson{ 19 };
//
//    std::vector<ResponsiblePerson*> pv{ p1,p2,p3 };
//
//    for (auto p : pv)
//    {
//        std::cout << p->get_age() << std::endl;
//        std::cout << p->drink() << std::endl;
//        std::cout << p->drive() << std::endl;
//        std::cout << p->drink_and_drive() << std::endl;
//        std::cout << std::endl;
//    }
//
//
//    delete p1, p2, p3;
//
//}
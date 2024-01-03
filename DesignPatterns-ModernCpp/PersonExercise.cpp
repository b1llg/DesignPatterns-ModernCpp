//#include <string>
//#include <iostream>
//#include <ostream>
//
//using namespace std;
//
//struct Person
//{
//    int id;
//    string name;
//
//    friend ostream& operator<<(ostream& os, Person& p)
//    {
//        os << "id: " << p.id << ", name: " << p.name << endl;
//
//        return os;
//    }
//
//};
//
//class PersonFactory
//{
//private:
//    int id = 0;
//public:
//    Person create_person(const string& name)
//    {
//        return { id++, name};
//    }
//};
//
//int main()
//{
//    PersonFactory pf;
//
//    Person p1 = pf.create_person("Bill");
//
//    cout << p1;
//
//    Person p2 = pf.create_person("Bill2");
//
//    cout << p2;
//
//    return 0;
//}
//#include <string>
//#include <ostream>
//#include <vector>
//#include <tuple>
//#include <iostream>
//
//using namespace std;
//
//class TheClass
//{
//private:
//    string name;
//    vector<tuple<string, string>> fields;
//
//    friend class CodeBuilder;
//public:
//    friend ostream& operator<<(ostream& os, const TheClass& obj)
//    {
//        os << "class " << obj.name << "\n{\n";
//
//        for (auto f : obj.fields)
//        {
//            os << " " << get<1>(f) << " " << get<0>(f) << ";\n";
//        }
//        return os << "};\n";
//    }
//
//};
//
//class CodeBuilder
//{
//private:
//    TheClass thisClass;
//public:
//    CodeBuilder(const string& class_name)
//    {
//        thisClass.name = class_name;
//    }
//
//    CodeBuilder& add_field(const string& name, const string& type)
//    {
//        thisClass.fields.push_back(tuple<string, string>(name, type));
//
//        return *this;
//    }
//
//    friend ostream& operator<<(ostream& os, const CodeBuilder& obj)
//    {
//        return os << obj.thisClass;
//    }
//};
//
//int main()
//{
//    unique_ptr<CodeBuilder> p_cb = make_unique<CodeBuilder>("Person");
//    p_cb->add_field("name", "string").add_field("age", "int");
//
//    cout << *p_cb << endl;
//}
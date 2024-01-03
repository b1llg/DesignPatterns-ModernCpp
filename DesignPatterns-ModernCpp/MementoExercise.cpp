//#include <iostream>
//#include <vector>
//#include <memory>
//using namespace std;
//
//struct Token
//{
//    int value;
//
//    Token(int value) : value(value) {}
//};
//
//struct Memento
//{
//    vector<shared_ptr<Token>> tokens;
//};
//
//struct TokenMachine
//{
//    vector<shared_ptr<Token>> tokens;
//
//    Memento add_token(int value)
//    {
//        return add_token(make_shared<Token>(value));
//    }
//
//    Memento add_token(const shared_ptr<Token>& token)
//    {
//        tokens.push_back(token);
//        Memento m;
//        for (auto t : tokens)
//            m.tokens.emplace_back(make_shared<Token>(t->value));
//        return m;
//    }
//
//    void revert(const Memento& m)
//    {
//        tokens.clear();
//        for (auto t : m.tokens)
//            tokens.emplace_back(make_shared<Token>(t->value));
//    }
//};
//
//int main()
//{
//
//    TokenMachine tm;
//    auto m = tm.add_token(123);
//
//    tm.add_token(456);
//
//    cout << tm.tokens.size() << endl;
//    cout << tm.tokens[0]->value << endl;
//    cout << tm.tokens[1]->value << endl;
//
//
//    tm.revert(m);
//
//    cout << tm.tokens.size() << endl;
//    cout << tm.tokens[0]->value << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//template <typename T>
//struct Node
//{
//    T value;
//    Node* left{ nullptr }, * right{ nullptr }, * parent{ nullptr };
//
//    Node(T value) : value(value) {}
//
//    Node(T value, Node<T>* left, Node<T>* right) : value(value), left(left), right(right) {
//        left->parent = right->parent = this;
//    }
//
//    void preorder_traversal_impl(Node<T>* current, vector<Node<T>*>& result)
//    {
//        result.push_back(current);
//        if (current->left)
//        {
//            preorder_traversal_impl(current->left, result);
//        }
//        if (current->right)
//        {
//            preorder_traversal_impl(current->right, result);
//        }
//    }
//
//    // traverse the node and its children preorder
//    // and put all the results into `result`
//    void preorder_traversal(vector<Node<T>*>& result)
//    {
//        preorder_traversal_impl(this, result);
//    }
//};
//
//int main()
//{
//        Node<char> c{ 'c' };
//        Node<char> d{ 'd' };
//        Node<char> e{ 'e' };
//        Node<char> b{ 'b', &c, &d };
//        Node<char> a{ 'a', &b, &e };
//
//        vector<Node<char>*> result, result2;
//        a.preorder_traversal(result);
//        b.preorder_traversal(result2);
//
//        ostringstream oss;
//        for (auto n : result)
//            oss << n->value;
//        cout << "abcde" << "==" << oss.str() << " ?" << endl;
//
//        ostringstream oss2;
//        for (auto n : result2)
//            oss2 << n->value;
//        cout << "bcd" << "==" << oss2.str() << " ?" << endl;
//
//}
//#include <string>
//#include <iostream>
//#include <ostream>
//
//struct Flower
//{
//    virtual std::string str() = 0;
//};
//
//struct Rose : Flower
//{
//    std::string str() override {
//        return "A rose";
//    }
//};
//
//struct RedFlower : Flower
//{
//    Flower& flower;
//
//    RedFlower(Flower& flower) : flower(flower) {}
//
//    std::string str() override
//    {
//        std::string s = flower.str();
//        if (s.find("red") != std::string::npos) return s;
//        else if (s.find("blue") != std::string::npos)
//        {
//            return s + " and red";
//        }
//        else return s + " that is red";
//    }
//};
//
//struct BlueFlower : Flower
//{
//    Flower& flower;
//
//    BlueFlower(Flower& flower) : flower(flower) {}
//
//    std::string str() override
//    {
//        std::string s = flower.str();
//        if (s.find("blue") != std::string::npos) return s;
//        else if (s.find("red") != std::string::npos)
//        {
//            return s + " and blue";
//        }
//        else return s + " that is blue";
//    }
//};
//
///*
//cout << rose.str();          // "A rose"
//cout << red_rose.str();      // "A rose that is red"
//cout << red_red_rose.str();  // "A rose that is red"
//cout << blue_red_rose.str(); // "A rose that is red and blue"
//*/
//
//int main()
//{
//    Rose rose;
//    RedFlower red_rose{ rose };
//    RedFlower red_red_rose{ red_rose };
//    BlueFlower blue_red_rose{ red_rose };
//
//    std::cout << rose.str() << std::endl;          // "A rose"
//    std::cout << red_rose.str() << std::endl;      // "A rose that is red"
//    std::cout << red_red_rose.str() << std::endl;  // "A rose that is red"
//    std::cout << blue_red_rose.str() << std::endl; // "A rose that is red and blue"
//
//    return 0;
//}
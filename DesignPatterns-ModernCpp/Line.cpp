//#include <iostream>
//#include <ostream>
//
//struct Point
//{
//    int x{ 0 }, y{ 0 };
//
//    Point() {}
//
//    Point(const int x, const int y) : x{ x }, y{ y } {}
//};
//
//struct Line
//{
//    Point* start, * end;
//
//    Line(Point* const start, Point* const end)
//        : start(start), end(end)
//    {
//    }
//
//    ~Line()
//    {
//        delete start;
//        delete end;
//    }
//
//
//    Line deep_copy() const
//    {
//        return Line{
//          new Point(start->x, start->y),
//          new Point(end->x, end->y)
//        };
//    }
//
//    friend std::ostream& operator<<(std::ostream& os, Line& l)
//    {
//        os << "(" << l.start->x << ", " << l.start->y << ")" << " ====>"
//            << " (" << l.end->x << ", " << l.end->y << ")" << std::endl;
//
//        return os;
//    }
//};
//
//int main()
//{
//    Point* p1 = new Point;
//    Point* p2 = new Point{ 1,0 };
//
//    Line l1{ p1 , p2 };
//
//    std::cout << l1 << std::endl;
//
//    Line l2{ l1.deep_copy() };
//
//    std::cout << l2 << std::endl;
//
//    return 0;
//}
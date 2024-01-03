//#include <iostream>
//#include <cmath>
//#include <ostream>
//
//enum class PointType
//{
//	cartesian,
//	polar
//};
//
///// @brief 
//class Point
//{
//private:	
//	double x;
//	double y;
//
//public:
//
//	/// @brief 
//	/// @param a 
//	/// @param b 
//	/// @param type 
//	Point(double a, double b, PointType type = PointType::cartesian)
//	{
//		if (type == PointType::cartesian)
//		{
//			x = a;
//			y = b;
//		}
//		else
//		{
//			x = a * cos(b);
//			y = a * sin(b);
//		}
//	}
//
//	/// @brief 
//	/// @param os 
//	/// @param p 
//	/// @return 
//	friend std::ostream& operator<<(std::ostream &os, const Point& p)
//	{
//		os << "x: " << p.x << ", y: " << p.y << std::endl;
//
//		return os;
//	}
//};
//
//
//struct PointFactory
//{
//	/// @brief 
///// @param r 
///// @param theta 
///// @return 
//	static Point NewPolar(double r, double theta)
//	{
//		return { r * cos(theta), r * sin(theta) };
//	}
//
//	/// @brief 
//	/// @param x 
//	/// @param y 
//	/// @return 
//	static Point NewCartesian(double x, double y)
//	{
//		return { x, y };
//	}
//};
//
//int main()
//{
//
//	Point p = PointFactory::NewCartesian(10.0, 10.0);
//
//	std::cout << p << std::endl;
//
//
//	return 0;
//}
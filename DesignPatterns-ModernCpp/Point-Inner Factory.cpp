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
//	class PointFactory
//	{
//	private:
//		PointFactory() {};
//	public:
//		/// @brief 
//	/// @param r 
//	/// @param theta 
//	/// @return 
//		static Point NewPolar(double r, double theta)
//		{
//			return { r * cos(theta), r * sin(theta) };
//		}
//
//		/// @brief 
//		/// @param x 
//		/// @param y 
//		/// @return 
//		static Point NewCartesian(double x, double y)
//		{
//			return { x, y };
//		}
//	};
//
//public:
//
//	void X(double v)
//	{
//		this->x = v;
//	}
//
//	double X() const
//	{
//		return this->x;
//	}
//
//	void Y(double v)
//	{
//		this->y = v;
//	}
//
//	double Y() const
//	{
//		return this->y;
//	}
//
//	static PointFactory Factory;
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
//	friend std::ostream& operator<<(std::ostream& os, const Point& p)
//	{
//		os << "x: " << p.x << ", y: " << p.y << std::endl;
//
//		return os;
//	}
//
//
//};
//
//
//int main()
//{
//	Point p = Point::Factory.NewCartesian(0.0, 0.0);
//
//	std::cout << p << std::endl;
//
//	std::cout << p.X() << std::endl;
//
//	p.X(1.0);
//
//	std::cout << p.X() << std::endl;
//
//
//	return 0;
//}
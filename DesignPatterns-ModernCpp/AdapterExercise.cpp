//#include <iostream>
//
//
///// <summary>
///// Square class, no methods
///// </summary>
//struct Square
//{
//    int side{ 0 };
//
//
//    explicit Square(const int side)
//        : side(side)
//    {
//    }
//};
//
///// <summary>
///// Base rectangle class, area method implemented
///// </summary>
//struct Rectangle
//{
//    virtual int width() const = 0;
//    virtual int height() const = 0;
//
//    int area() const
//    {
//        return width() * height();
//    }
//};
//
///// <summary>
///// 
///// Since there is no area method in square, we create an adapter to compute the area of sqaures
///// 
///// </summary>
//struct SquareToRectangleAdapter : Rectangle
//{
//    // Define a square member initialized with SquareToRectangleAdapter input
//    const Square& square;
//
//    // see previous
//    SquareToRectangleAdapter(const Square& square)
//        :square(square){}
//    
//    // Bypass the width request from rectangle with size of square
//    int width() const override
//    {
//        return square.side;
//    }
//
//    // Bypass for height
//    int height() const override
//    {
//        return square.side;
//    }
//};
//
//int main()
//{
//
//    Square sq{ 11 };
//    SquareToRectangleAdapter adapter{ sq };
//
//    Rectangle rec{}
//
//    std::cout << adapter.area() << std::endl;
//
//
//    return 0;
//}
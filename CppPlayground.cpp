// CppPlayground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
//#include "SmartPtr.h"


/*

struct AddFunctor
{
    AddFunctor(int x)
        : m_x(x)
    {}
    int operator()(int y) const
    {
        return m_x + y;
    }

    int m_x;
};

class Point
{
    int m_x;
    int m_y;

public:

    Point (int& x, int& y)
        : m_x(x)
        , m_y(y)
    {

    }

    int ReturnPoint (int* x, int* y)
    {
        return *x + *y;
    }

};

int Add (int x, int y)
{
    return x + y;
}


*/
//functor 


    int main ()
    {
        double x{ 5 }, y{ 7 };
        Test::Point p{ x, y };
        std::cout << "This is the original point location: " << p << std::endl;
        p.move (2, 2);
        std::cout << "This is the new point location: " << p << std::endl;

        return 0;
    }

    


    




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

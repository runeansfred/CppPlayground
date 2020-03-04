#pragma 

#include <iostream>
#include <cmath> 

namespace PointSpace
{
	class Point
	{
	private:
		double
			x{ 1.1 },
			y{ 2.1 },
			scaling_factor{ 2 };

	public:
		Point (double& x_coord, double& y_coord) : x{ x_coord }, y{ y_coord } {}; //
		Point () : x{ 0.0 }, y{ 0.0 } {}; //Default constructor 

		double getx () const;
		double gety () const;
		void move (double, double);
		double distance_to (Point) const;
	};

	std::ostream& operator<<(std::ostream&, const Point&);
}







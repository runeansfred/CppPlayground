#include "Point.h"

#include <cmath>
#include <iostream> 

namespace PointSpace
{
	double Point::getx () const
	{
		return x * scaling_factor;
	}

	double Point::gety () const
	{
		return y * scaling_factor;
	}

	void Point::move (double dx, double dy)
	{
		x += dx; y += dy;
	}

	double Point::distance_to (Point p) const
	{
		return sqrt ((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
	}

	std::ostream& operator<<(std::ostream& s, const Point& p)
	{
		return s << "(" << p.getx () << "," << p.gety () << ")";
	}
}

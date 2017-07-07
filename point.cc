#include <iostream>
using namespace std;

class Point {
public:
  // Member variables can be given default values in this manner.
  double x = 0;
  double y = 0;

  // Define a default constructor which does nothing
  // but initialize the Point to the default value (0, 0)
  Point() { };

  // The following syntax is known as an initialization list
  // and is the proper way to initialize class member values
  Point (double a, double b) :
    x(a),
    y(b)
  { /* Do nothing except initialize the values */ }

  // Overload the + operator.
  Point operator+(const Point& rhs) const;
  // Overload the - operator.
  Point operator-(const Point& rhs) const;
  // Overload the += operator
  Point& operator+=(const Point& rhs);
  // Overload the -= operator.
  Point& operator-=(const Point& rhs);
};

Point Point::operator+(const Point& rhs) const {
  // Create a new point that is the sum of this one and rhs.
  return Point(x + rhs.x, y + rhs.y);
}

Point Point::operator-(const Point& rhs) const{
  return Point(x - rhs.x, y - rhs.y);
}

Point& Point::operator+=(const Point& rhs) {
  x += rhs.x; y += rhs.y;
  return *this;
}

Point& Point::operator-=(const Point& rhs) {
  x -= rhs.x; y -=rhs.y;
  return *this;
}

int main ()
{
  Point up (0,1), right (1,0),
    A (0, 11), B (5, 9);

  // This calls the Point + operator
  // Point up calls the + (function) with right as its parameter
  Point result = up + right;
  // Prints "Result is upright (1,1)"
  cout << "Result is upright (" << result.x << ',' << result.y << ")\n";

  result = A - B;

  printf("(%lf, %lf)", result.x, result.y);
  
  return 0;
}

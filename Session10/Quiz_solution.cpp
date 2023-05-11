#include <math.h>
​
const float PI_F = 3.14f;
​
class Circle {
  public:
    Circle(float theRadius){ Radius = theRadius; };
    float getArea() { return (PI_F * pow(Radius, 2)); };
    float getPerimeter() { return (2 * PI_F * Radius); };
  private:
    float Radius;
};
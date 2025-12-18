#include <iostream>
#include <cmath>

class Coordinate {
public:
    double x;
    double y;

    Coordinate() : x(0.0), y(0.0) {}

    Coordinate(double xVal, double yVal) : x(xVal), y(yVal) {}

    double distanceTo(const Coordinate& other) const {
        double dx = other.x - x;
        double dy = other.y - y;
        return std::hypot(dx, dy);
        
    }

    static double distance(const Coordinate& a, const Coordinate& b) {
        return a.distanceTo(b);
    }
};

int main() {
    Coordinate p1(1.5, 2.0);
    Coordinate p2(4.0, 6.0);

    double d1 = p1.distanceTo(p2);
    double d2 = Coordinate::distance(p1, p2);

    std::cout << "Distance (member): " << d1 << '\n';
    std::cout << "Distance (static): " << d2 << '\n';

    return 0;
}

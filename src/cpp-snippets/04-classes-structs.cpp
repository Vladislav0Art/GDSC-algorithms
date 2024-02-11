#include <iostream>

using namespace std;


struct Point {
    int x;
    int y;

    Point(int x_, int y_) : x(x_), y(y_) {}
    // or
    Point(int val) {
        x = val;
        this->y = val;
    }

    void print() {
        cout << "Point(" << x << ", " << y << ")\n";
    }
};

class Point2 {
// default member access is 'private'!
public:

    Point2(int x_, int y_) : x(x_), y(y_) /* <- initialization order matters! */ {}

    void print() {
        cout << "Point2(" << x << ", " << y << ")\n";
    }

    static const int VALUE = 1000;

private:
    Point2(int val) : x(val), y(val) {/* cannot access this constructor outside of the class */}

private:
    int x;
    int y;
};


int main() {
    // struct
    {
        Point p1(10, 20);
        p1.print();

        auto p2 = Point(100);
        p2.print();
    }

    // class
    {
        Point2 p1(12, 22);
        p1.print();

        // Point2 p2(10); // CE: cannot access Point(int)

        std::cout << "static value: " << Point2::VALUE << "\n";
    }
}
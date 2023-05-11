#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double Area() {
        return length * width;
    }
};


int main() {
    double length, width;
    cin >> length >> width;
    Rectangle r(length,width);

    cout << r.Area() << endl;

    return 0;
}
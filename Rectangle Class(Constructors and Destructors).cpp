#include<iostream>
#include<cmath>
using namespace std;

class Rect {
public:
    double length, width;

    Rect(double l, double w) {
        length = l;
        width = w;
    }

    // This operator+ is now correct!
    // Added 'const' as is good practice.
    Rect operator+(const Rect& r) {
        return Rect(length + r.length, width + r.width);
    }

    // FIX 1: Return type changed from 'Rect' to 'Rect&'
    Rect& operator++() {
        length++;
        width++;
        return *this;
    }

}; // <-- FIX 2: Added the missing semicolon

// This function is fine.
// I removed 'endl' so 'main' can control newlines.
ostream& operator<<(ostream& os, const Rect& rect) {
    os << "L: " << rect.length << ", W: " << rect.width;
    return os;
}

int main() {
    Rect rect1(1, 3);
    Rect rect2(4, 7);

    cout << "Rectangle 1: " << rect1 << endl;
    cout << "Rectangle 2: " << rect2 << endl;

    Rect rect3 = rect1 + rect2;
    cout << "Their Sum: " << rect3 << endl;

    cout << "Checking ++ Operator:" << endl;
   
    // FIX 3: Renamed the variable to avoid redeclaration
    Rect rect3_inc = ++rect1;
    Rect rect4_inc = ++rect2;
   
    cout << "Rectangle 1 (new var): " << rect3_inc << endl;
    cout << "Rectangle 2 (new var): " << rect4_inc << endl;
   
    return 0;
}


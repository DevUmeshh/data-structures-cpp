#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid sides";
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid Triangle";
    }
    else if (a == b && b == c) {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle";
    }
    else {
        cout << "Scalene Triangle";
    }

    return 0;
}
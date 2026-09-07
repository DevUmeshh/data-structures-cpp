#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle";
    }
    else if (a + b + c != 180) {
        cout << "Invalid Triangle";
    }
    else if (a == 90 || b == 90 || c == 90) {
        cout << "Right-Angled Triangle";
    }
    else if (a > 90 || b > 90 || c > 90) {
        cout << "Obtuse-Angled Triangle";
    }
    else {
        cout << "Acute-Angled Triangle";
    }

    return 0;
}
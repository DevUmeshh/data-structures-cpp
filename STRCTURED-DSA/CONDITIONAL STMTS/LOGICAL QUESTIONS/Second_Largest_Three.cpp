#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three different numbers: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c)) {
        cout << "Second Largest = " << a;
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        cout << "Second Largest = " << b;

    }
    else {


#include <iostream>
using namespace std;

int main() {
    float radius, circumference;
    float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "Circumference of the circle = " << circumference << endl;

    return 0;
}

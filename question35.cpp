#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "HCF of " << x << " and " << y << " = " << a << endl;

    return 0;
}

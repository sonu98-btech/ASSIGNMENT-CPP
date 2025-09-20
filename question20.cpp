#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int largest = max(max(a, b), max(c, d));

    cout << "The largest number is: " << largest << endl;
    return 0;
}

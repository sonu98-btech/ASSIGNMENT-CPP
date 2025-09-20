#include <iostream>
using namespace std;
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (hcf(num1, num2) == 1)
        cout << num1 << " and " << num2 << " are Co-Prime numbers." << endl;
    else
        cout << num1 << " and " << num2 << " are NOT Co-Prime numbers." << endl;

    return 0;
}

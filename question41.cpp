#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are: ";

    for (int num = 1; num < 1000; num++) {
        int sum = 0, temp = num, remainder;

        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, 3);  // cube of digit
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    cout << endl;
    return 0;
}

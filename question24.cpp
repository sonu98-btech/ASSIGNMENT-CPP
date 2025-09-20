#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1; 
    }

    cout << "Sum of first " << n << " odd natural numbers is: " << sum << endl;
    return 0;
}

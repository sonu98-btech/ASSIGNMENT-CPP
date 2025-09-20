#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i; 
    }

    cout << "Sum of squares of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}

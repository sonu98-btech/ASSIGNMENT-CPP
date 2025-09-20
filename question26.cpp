#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0; 

    cout << "Enter a number N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i * i; // Cube of i
    }

    cout << "The sum of cubes of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}

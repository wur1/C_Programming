#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    cin >> n;

    x = -n * n; // Initialize x after reading n

    for (k = 0; k <= 3 * n; k++) { // Use <= in the loop condition
        cout << x << endl;
        x = x + 2 * k; // Correct the formula
    }

    return 0;
}

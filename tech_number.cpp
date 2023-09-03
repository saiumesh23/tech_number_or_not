#include <iostream>
#include <cmath>
using namespace std;

bool isTechNumber(int n);
int countDigits(int n);

int main() {
    int n;
    cin >> n;

    if (isTechNumber(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

bool isTechNumber(int n) {
    int no_of_digits = countDigits(n);

    if (no_of_digits % 2 != 0) {
        return false;
    } else {
        int t = no_of_digits / 2;
        int divisor = pow(10, t);
        int x1 = n / divisor;
        int x2 = n % divisor;
        int x = x1 + x2;

        if ((x * x) == n) {
            return true;
        }
    }

    return false;
}

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

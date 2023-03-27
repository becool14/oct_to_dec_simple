#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of octal fractions to be converted: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double octal_fraction, decimal_fraction = 0;
        int octal_whole, decimal_whole = 0;
        int count = 0;
        cout << "Enter octal fraction " << i << ": ";
        cin >> octal_fraction;

        octal_whole = (int)octal_fraction;  // Extract whole part
        octal_fraction -= octal_whole;      // Extract fraction part

        // Convert whole part to decimal
        while (octal_whole != 0) {
            int rem = octal_whole % 10;
            decimal_whole += rem * pow(8, count);
            octal_whole /= 10;
            count++;
        }

        // Convert fraction part to decimal
        count = -1;
        while (octal_fraction != 0) {
            int int_part = (int)(octal_fraction * 10);
            decimal_fraction += int_part * pow(8, count);
            octal_fraction = octal_fraction * 10 - int_part;
            count--;
        }

        // Display result with full precision
        cout.precision(std::numeric_limits<double>::digits10);
        cout << "Decimal equivalent of octal fraction " << i << " is " << decimal_whole + decimal_fraction << endl;
    }

    return 0;
}

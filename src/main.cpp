#include <iostream>
#include <cmath>
using namespace std;

// Example function: f(x) = 5x^2 + x^5 + 3x^4
double f(double x) {
    return 5*pow(x, 2) + pow(x, 5) + 3*pow(x, 4);
}

// Difference quotient: (f(x + h) - f(x)) / h
double differenceQuotient(double x, double h) {
    return (f(x + h) - f(x)) / h;
}

int main() {
    double x = 795.2321;   // point where we want the slope
    double h = 1e-5;  // small step size

    double dq = differenceQuotient(x, h);

    cout << "The difference quotient at x = " << x
         << " is approximately " << dq << endl;

    return 0;
}
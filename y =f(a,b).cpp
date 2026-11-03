#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

double f1(double a, double b) {
    if (b == 0) { cout << "Error: b = 0" << endl; return NAN; }
    double t = a / b * PI;
    return cbrt(0.1 * log(exp(3.0)) /
        (pow(sin(t), 2) + pow(cos(t), 2)));
}

double f2(double a, double b) {
    if (a == 0) { cout << "Error: a = 0" << endl; return NAN; }
    double t = b / a * PI;
    double d = 1 - cbrt(cos(t));
    if (d == 0) { cout << "Error: d = 0" << endl; return NAN; }
    return cbrt(pow(0.127 * exp(b / a) / d, 2));
}

int main() {
    cout << "y1 = " << f1(2, 11.05) << endl;
    cout << "y2 = " << f2(3, 0.521) << endl;
    system("pause");
}
#include <iostream>
#include <cmath>  // Для використання cos
#include <stdlib.h>
#include <math.h>


using namespace std;

double Function(double x) {
    return pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 * cos(x);
}

int main() {
    double x = 2.0;
    double y = Function(x);
    cout << "The value of the function y at x = " << x << " is: " << y << endl;
    return 0;
}
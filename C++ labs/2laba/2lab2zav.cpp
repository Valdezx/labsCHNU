#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = x2 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-d) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imagPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imagPart << "i" << endl;
    }
    return 0;
}
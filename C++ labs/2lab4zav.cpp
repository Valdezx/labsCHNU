#include <iostream>
#include <cmath>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //ax2+bx+c=0
    double a, b, c, d, x1, x2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Відповіді дійсні та різні." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = x2 = -b / (2 * a);
        cout << "Відповіді дійсні та однакові." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-d) / (2 * a);
        cout << "Корені комплексні та різні." << endl;
        cout << "x1 = " << realPart << "+" << imagPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imagPart << "i" << endl;
    }
    return 0;
}
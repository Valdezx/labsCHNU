#include <iostream>
#include <cmath>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Введіть 3 сторони трикутника: ";
    cin >> a >> b >> c;

   if (a>0 && b>0 && c>0)
    {
        cout << "Трикутник збудувати можливо." << endl;
    }
    else if (a<0 || b<0 || c<0)
    {
        cout << "Трикутник збудувати не можливо." << endl;
    }
    else if (a+b>c && a+c>b && b+c>a)
    {
        cout << "Трикутник збудувати можливо." << endl;
    }
    else
    {
        cout << "Трикутник збудувати не можливо." << endl;
    }
    return 0;
}
   
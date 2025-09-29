#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
   float a,b,c;
    cout<<"Введіть a,b,c: ";
    cin>>a>>b>>c;

    if (a>b,c)
    {
        cout<<"a найбільше"<<endl;
    }
    else if (b>a,c)
    {
        cout<<"b найбільше"<<endl;
    }
    else if (c>a,b)
    {
        cout<<"c найбільше"<<endl;
    }
    else
    {
        cout<<"числа рівні"<<endl;
    }
    return 0;
}
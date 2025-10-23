#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float D, V, V1;
    cout<<"Введіть курс долара: "<<endl;
    cin>>V;

    for (D=1.0;D<=10.0;)
    V1=V*D;
    cout<<"Курс долара: "<<V1<<endl;


    return 0;
}
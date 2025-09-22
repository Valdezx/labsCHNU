#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//вносимо дані
	float x1, x2, x3, y1, y2, y3;
	cout<<"Enter 6 numbers: ";
	cin>>x1>>x2>>x3>>y1>>y2>>y3;
	
	//вносимо формули розрахунку сторін трикутника
	//D=sqrt (xN * xN - xM * xM)+(yN * yN - yM * yM)
	float a=sqrt((x3 * x3 - x2 * x2)+(y3 * y3 - y2 * y2 ));
	float b=sqrt((x3 * x3 - x1 * x1)+(y3 * y3 - y1 * y1 ));
	float c=sqrt((x1 * x1 - x2 * x2)+(y1 * y1 - y2 * y2 ));
	cout<<"a,b,c is: "<<a<<b<<c<<endl;
	float P=a + b + c;
	cout<<"P is: "<<P;
	
	return 0;
}
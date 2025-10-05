#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b;
	cout<<"enter a,b: ";
	cin>>a>>b;
	float c=sqrt( a * a + b * b);
	cout<<"c is: "<<c<<endl;
	float P=(a+b+c);
	cout<<"P is: "<<P;
	
	
	return 0;
}
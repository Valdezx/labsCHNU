#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b,c;
	cout<<"enter a,b,c: ";
	cin>>a>>b>>c;
	float V=(a * b * c);
	cout<<"V is: "<<V<<endl;
	float S=2 * (a * b + a * c + b * c);
	cout<<"S is: "<<S;
		
	return 0;
}
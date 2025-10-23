#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <time.h>


using namespace std;

int main ()
{
	setlocale (LC_ALL, "UA");
	srand(time(NULL));
	
	int a[10]{}, b[10]{}, c[10]{}, i, n;
	
	cout<<"enter n: ";
	cin>>n;
	
	for (i=1;i<n; i++){
	a[i] = rand()% 21+10;
	b[i] = rand()% 21+10;
	c[i] = a[i]-b[i];
	}
	cout<<"a: "<<a[i]<<endl;
	cout<<"b: "<<b[i]<<endl;
	cout<<"c: "<<c[i]<<endl;
	
	
	return 0;
}
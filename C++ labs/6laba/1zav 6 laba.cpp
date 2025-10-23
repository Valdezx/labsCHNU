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
	
	int mas[5]{};
	int i, plus=1;
	
	cout<<"введіть 1 з 5 чисел: "<<endl;
	cin>>mas[0];
	cout<<"введіть 2 з 5 чисел: "<<endl;
	cin>>mas[1];
	cout<<"введіть 3 з 5 чисел: "<<endl;
	cin>>mas[2];
	cout<<"введіть 4 з 5 чисел: "<<endl;
	cin>>mas[3];
	cout<<"введіть 5 з 5 чисел: "<<endl;
	cin>>mas[4];
	
	
	int min = mas[0];
	for (i = 0; i<5; i++){
		if (mas[i] < min){
			
			min = mas [i];
		}
		else{ }
		
		cout<<"мінімальний елемент це: "<<min<<endl;
		
	}
		for (i = 0; i<5; i++)
		{
	
			if (mas[i]>0){
			
			plus *= mas[i];
			
			}
			else{
			}
	
	}
		cout<<"добуток: "<<plus<<endl;
	
	return 0;
}
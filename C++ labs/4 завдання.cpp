#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number;
	cout<<"Enter 3-number : "<<endl;
	cin>>number;
	
	if (number >= 100 && number <= 999) {
        int lastDigit = number % 10;
        int remainingDigits = number / 10;

        int newNumber = lastDigit * 100 + remainingDigits;

        cout << "Отримане число: " << newNumber << std::endl;
    } else {
       cout << "Ви ввели не тризначне число." << std::endl;
    }
		
	return 0;
}
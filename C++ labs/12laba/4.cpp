#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctime>
#include <limits> // Для очистки потока ввода
#include <algorithm> 

using namespace std;



int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int arrayMax(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int arrayMin(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

double arrayAVG(int arr[], int size) {
    if (size == 0) {
        return 0.0; 
    }
    long long sum = 0; 
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArrayAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

void sortArrayDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}



int main(){
	setlocale(LC_ALL, "RUS"); 
	srand(time(NULL));

	int size;
	

	do {
		cout << "Введите размер массива (1..100): ";
		cin >> size;

	
		if (cin.fail()) {
			cout << "Ошибка ввода. Пожалуйста, введите целое число." << endl;
			cin.clear(); // Сброс флага ошибки
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
		} 

		else if (size < 1 || size > 100) {
			cout << "Некорректный размер массива. Пожалуйста, введите число от 1 до 100." << endl;
		}
	} while (size < 1 || size > 100 || cin.fail());


	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 201-100; 
	}
	
	cout << "Сгенерированный массив: ";
	printArray(arr, size);
	
	int option;
	cout << "\nВыберите опцию:" << endl;
	cout << "1. Вывести массив" << endl;
	cout << "2. Найти сумму элементов" << endl;
	cout << "3. Найти максимальный элемент" << endl;
	cout << "4. Найти минимальный элемент" << endl;
	cout << "5. Вывести среднее значение массива"<<endl;
	cout << "6. Сортировать по возрастанию"<<endl;
	cout << "7. Сортировать по убыванию"<<endl;
	cout << "Ваш выбор: ";
	cin >> option;

	while (cin.fail() || option < 1 || option > 7) {
		cout << "Некорректный выбор. Введите число от 1 до 7: ";
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> option;
	}

	switch (option)
	{
		case 1:
			cout << "\n1. Массив: ";
			printArray(arr, size);
			break;
		case 2:
			cout << "\n2. Сумма элементов массива: " << arraySum(arr, size) << endl;
			break;
		case 3:
			cout << "\n3. Максимальный элемент массива: " << arrayMax(arr, size) << endl;
			break;
		case 4:
			cout << "\n4. Минимальный элемент массива: " << arrayMin(arr, size) << endl;
			break;
		case 5:
			cout <<"\n5. Среднее значение массива: "<< arrayAVG(arr, size) << endl;
			break;
		case 6:
			sortArrayAscending(arr, size);
			cout << "\n6. Массив отсортирован по возрастанию: ";
			printArray(arr, size);
			break;
		case 7:
			sortArrayDescending(arr, size);
			cout << "\n7. Массив отсортирован по убыванию: ";
			printArray(arr, size);
			break;
		default:
			cout << "Неверная опция." << endl;
			break;
	}
		
	delete[] arr;

	cout << "\nНажмите Enter, чтобы выйти...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	cin.get(); 

	return 0;
}
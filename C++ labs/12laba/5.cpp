#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctime>
#include <limits>
#include <algorithm> // Для std::remove
#include <iterator>

using namespace std;

// --- Функції для сирих масивів (залишені як є, але в main використовуємо vector) ---

int arraySum(const int arr[], int size) {
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    if (sum > numeric_limits<int>::max() || sum < numeric_limits<int>::min()) {
        cout << "Попередження: Сума перевищує діапазон int." << endl;
    }
    return (int)sum;
}

int arrayMax(const int arr[], int size) {
    if (size == 0) return 0;
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int arrayMin(const int arr[], int size) {
    if (size == 0) return 0;
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

double arrayAVG(const int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

void printArray(const int arr[], int size) {
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

void insertValueAfterX(vector<int>& vec, int x_value, int y_value) {
    vector<int> new_vec;
    for (int val : vec) {
        new_vec.push_back(val);
        if (val == x_value) {
            new_vec.push_back(y_value);
        }
    }
    vec = new_vec;
}

void deleteElementX(vector<int>& vec, int x_value) {
    auto new_end = std::remove(vec.begin(), vec.end(), x_value);
    vec.erase(new_end, vec.end());
}


int main(){
	setlocale(LC_ALL, "UKR"); // Змінено на українську локаль
	srand(time(NULL));

	int initial_size;

	// Введення розміру масиву з перевіркою
	do {
		cout << "Введіть розмір масиву (1..100): ";
		cin >> initial_size;

		if (cin.fail()) {
			cout << "Помилка введення. Будь ласка, введіть ціле число." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		else if (initial_size < 1 || initial_size > 100) {
			cout << "Некоректний розмір масиву. Будь ласка, введіть число від 1 до 100." << endl;
		}
	} while (initial_size < 1 || initial_size > 100 || cin.fail());

	// Використовуємо std::vector
	vector<int> vec_arr;
	for (int i = 0; i < initial_size; i++)
	{
		vec_arr.push_back(rand() % 201 - 100);
	}

	cout << "Згенерований масив (std::vector): ";
    for (int val : vec_arr) {
        cout << val << " ";
    }
    cout << endl;

	int option;
	cout << "\nОберіть опцію:" << endl;
	cout << "1. Вивести масив" << endl;
	cout << "2. Знайти суму елементів" << endl;
	cout << "3. Знайти максимальний елемент" << endl;
	cout << "4. Знайти мінімальний елемент" << endl;
	cout << "5. Вивести середнє значення масиву"<<endl;
	cout << "6. Сортувати за зростанням"<<endl;
	cout << "7. Сортувати за спаданням"<<endl;
	cout << "8. Вставити значення Y після кожного X" << endl;
	cout << "9. Видалити елемент зі значенням X" << endl;
	cout << "Ваш вибір: ";
	cin >> option;

    // Перевірка коректності вибору
	while (cin.fail() || option < 1 || option > 9) {
		cout << "Некоректний вибір. Введіть число від 1 до 9: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> option;
	}

    // Отримуємо сирий масив для функцій 1-7, які працюють з int arr[]
    int* arr = vec_arr.data();
    int size = vec_arr.size();

	switch (option)
	{
		case 1:
			cout << "\n1. Масив: ";
			printArray(arr, size);
			break;
		case 2:
			cout << "\n2. Сума елементів масиву: " << arraySum(arr, size) << endl;
			break;
		case 3:
			cout << "\n3. Максимальний елемент масиву: " << arrayMax(arr, size) << endl;
			break;
		case 4:
			cout << "\n4. Мінімальний елемент масиву: " << arrayMin(arr, size) << endl;
			break;
		case 5:
			cout <<"\n5. Середнє значення масиву: "<< arrayAVG(arr, size) << endl;
			break;
		case 6: {
            // Копіювання для сортування, щоб зберегти сумісність з функцією
            int* temp_arr = new int[size];
            copy(vec_arr.begin(), vec_arr.end(), temp_arr);
			sortArrayAscending(temp_arr, size);
			cout << "\n6. Масив відсортовано за зростанням: ";
			printArray(temp_arr, size);
            delete[] temp_arr;
			break;
        }
		case 7: {
            int* temp_arr = new int[size];
            copy(vec_arr.begin(), vec_arr.end(), temp_arr);
			sortArrayDescending(temp_arr, size);
			cout << "\n7. Масив відсортовано за спаданням: ";
			printArray(temp_arr, size);
            delete[] temp_arr;
			break;
        }
		case 8: {
			int x_val, y_val;
			cout << "Введіть значення X (яке шукаємо): ";
			if (!(cin >> x_val)) { cout << "Некоректне введення X." << endl; break; }
			cout << "Введіть значення Y (яке вставляємо після X): ";
			if (!(cin >> y_val)) { cout << "Некоректне введення Y." << endl; break; }

            cout << "\n8. Вихідний масив: ";
            for (int val : vec_arr) { cout << val << " "; }
            cout << endl;

			insertValueAfterX(vec_arr, x_val, y_val);

			cout << "Масив після вставки Y(" << y_val << ") після кожного X(" << x_val << "): ";
            for (int val : vec_arr) { cout << val << " "; }
            cout << endl;
			break;
        }
		case 9: {
			int x_val;
			cout << "Введіть значення X (яке потрібно видалити): ";
			if (!(cin >> x_val)) { cout << "Некоректне введення X." << endl; break; }

            cout << "\n9. Вихідний масив: ";
            for (int val : vec_arr) { cout << val << " "; }
            cout << endl;

            deleteElementX(vec_arr, x_val);

			cout << "Масив після видалення всіх елементів зі значенням X(" << x_val << "): ";
            for (int val : vec_arr) { cout << val << " "; }
            cout << endl;
			break;
        }
		default:
			cout << "Невірна опція." << endl;
			break;
	}

	cout << "\nНатисніть Enter, щоб вийти...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();

	return 0;
}
#include <iostream>
#include <vector>   // Потрібен для std::vector
#include <cstdlib>  // Для rand() та srand()
#include <ctime>    // Для time()
#include <clocale>  // Для setlocale()
#include <time.h>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "UA");
    srand(time(0)); // Ініціалізуємо генератор випадкових чисел

    // 1. Створюємо ВЕКТОР (динамічний масив), а не C-масив
    std::vector<int> a;
    int n;
	int i;
    cout << "Введіть розмір масиву (n): ";
    cin >> n;

    // 2. Тепер .resize() працює, бо 'a' - це вектор
    a.resize(n);

    cout << "Масив a: [";

    // 3. Цикл має виконуватися ВСЕРЕДИНІ { ... }
    // 4. Цикл має йти від 0 до n-1, щоб заповнити ВЕСЬ масив
    for(int i = 0; i < n; i++) {
        // (rand() % 21) дає [0, 20]. 
        a[i] = rand() % 21;

        cout << a[i];
        if (i < n - 1) { // Додаємо кому, якщо це не останній елемент
            cout << ", ";
        }
        else{
		}
		

		
    }
    cout << "]" << endl; // Закриваємо дужку в кінці
	
	if(i%2==0){
			a[i] = 0;
		}
		else{
			a[i] = 1;
		}
		
	cout<<"a is: "<<a[i];
    return 0;
}
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int K;
    cout << "Введіть номер дня року (від 1 до 365): ";
    cin >> K;

    if (K >= 1 && K <= 365) {
        int startDay = 2; // 1 січня - вівторок
        int daysPassed = K - 1;

        // Обчислення дня тижня
        // (startDay - 1) - перехід на 0-6 діапазон
        // daysPassed % 7 - зсув
        // + 1 - перехід назад на 1-7 діапазон
        int dayOfWeek = ((startDay - 1 + daysPassed) % 7) + 1;

        cout << "Номер дня тижня для " << K << "-го дня року: " << dayOfWeek << endl;
        cout << "Цей день - ";

        switch (dayOfWeek) {
            case 1:
                cout << "понеділок" << endl;
                break;
            case 2:
                cout << "вівторок" << endl;
                break;
            case 3:
                cout << "середа" << endl;
                break;
            case 4:
                cout << "четвер" << endl;
                break;
            case 5:
                cout << "п'ятниця" << endl;
                break;
            case 6:
                cout << "субота" << endl;
                break;
            case 7:
                cout << "неділя" << endl;
                break;
        }
    } else {
        cout << "Некоректне значення K. Будь ласка, введіть число від 1 до 365." << endl;
    }

    return 0;
}
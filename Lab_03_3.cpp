// Lab_03_3.cpp
// Варіант 3
#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h> // Бібліотека для роботи з консоллю Windows

using namespace std;

int main()
{
    // Налаштування відображення української мови в консолі
    SetConsoleCP(65001);       // Встановлює кодування для введення
    SetConsoleOutputCP(65001); // Встановлює кодування для виведення

    double x, R, y;
    const double PI = atan(1.0) * 4;

    cout << "Введіть параметр R (R > 0, R < 7): "; cin >> R;
    cout << "Введіть аргумент x: "; cin >> x;

    if (x <= -7 - R)
    {
        y = -4;
    }
    else if (x > -7 - R && x <= -7 + R)
    {
        y = -4 + sqrt(R * R - (x + 7) * (x + 7));
    }
    else if (x > -7 + R && x <= 0)
    {
        y = (4 * x) / (7 - R);
    }
    else if (x > 0 && x <= PI)
    {
        y = sin(x);
    }
    else
    {
        y = 0;
    }

    cout << fixed << setprecision(5);
    cout << "\ny = " << y << endl;

    return 0;
}
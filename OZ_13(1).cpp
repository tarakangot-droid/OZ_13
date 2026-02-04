#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string brand;
    double minP, maxP;

    cout << "Бренд: ";
    cin >> brand;
    cout << "Мин. цена: ";
    cin >> minP;
    cout << "Макс. цена: ";
    cin >> maxP;

    ifstream f("phones.txt");
    if (!f) {
        cout << "Файл не найден.\n";
        return 1;
    }

    string model;
    double price;
    bool found = false;

    while (f >> model >> price) {
        if (price >= minP && price <= maxP && model == brand) {
            cout << model << " " << price << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Ничего не найдено.\n";
    }

    return 0;
}
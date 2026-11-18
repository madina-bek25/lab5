#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Сдвиг влево на k позиций
void shiftLeft(vector<int>& v, int k) {
    if (v.empty()) return;      // Краевой случай: пустой вектор
    k = k % v.size();           // Краевой случай: k больше размера
    if (k == 0) return;         // Сдвиг не нужен

    rotate(v.begin(), v.begin() + k, v.end());
}

// Сдвиг вправо на k позиций
void shiftRight(vector<int>& v, int k) {
    if (v.empty()) return;
    k = k % v.size();
    if (k == 0) return;

    // Для сдвига вправо мы отрываем кусок с конца
    rotate(v.begin(), v.end() - k, v.end());
}

// Функция для вывода
void printVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";
}
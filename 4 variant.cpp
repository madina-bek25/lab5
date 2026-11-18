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

int main() {
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    int k = 2;

    cout << "Исходный вектор: ";
    printVector(numbers);

    vector<int> left_shifted = numbers;
    shiftLeft(left_shifted, k);
    cout << "Сдвиг влево на " << k << ": ";
    printVector(left_shifted);

    vector<int> right_shifted = numbers;
    shiftRight(right_shifted, k);
    cout << "Сдвиг вправо на " << k << ": ";
    printVector(right_shifted);

    // Краевой случай: k больше размера (7 % 5 = 2)
    cout << "\nСдвиг влево на 7 (k > size): ";
    vector<int> large_k = numbers;
    shiftLeft(large_k, 7);
    printVector(large_k);

    return 0;
}
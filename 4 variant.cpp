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
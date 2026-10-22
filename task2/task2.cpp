#include <iostream>
#include <algorithm>  // для std::max
 
int main() {
    double a, b, c;
    std::cout << "Введите a: "; std::cin >> a;
    std::cout << "Введите b: "; std::cin >> b;
    std::cout << "Введите c: "; std::cin >> c;
 
    // Способ 1: цепочка if-else if-else
    double maximum;
    if (a >= b && a >= c) {
        maximum = a;
    } else if (b >= a && b >= c) {
        maximum = b;
    } else {
        maximum = c;
    }
    std::cout << "Максимум (через if): " << maximum << "\n";
 
    // Способ 2: встроенная функция
    std::cout << "Максимум (через std::max): "
              << std::max({a, b, c}) << "\n";
 
    // Способ 3: тернарный оператор
    double max_ab = (a > b) ? a : b;
    double max_ternary = (max_ab > c) ? max_ab : c;
    std::cout << "Максимум (тернарный): " << max_ternary << "\n";
 
    return 0;
}

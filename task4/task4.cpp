#include <iostream>
#include <cmath>
 
int main() {
    double a, b, c;
    std::cout << "Введите a: "; std::cin >> a;
    std::cout << "Введите b: "; std::cin >> b;
    std::cout << "Введите c: "; std::cin >> c;
 
    if (a == 0) {
        std::cout <<"Это не квадратное уравнение";
    } else {
        double d = b * b - 4 * a * c;

 
        if (d > 0) {
            double x1 = (-b + std::sqrt(d)) / (2 * a);
            double x2 = (-b - std::sqrt(d)) / (2 * a);
            std::cout << "Два корня: x1 = " << x1
                      << ", x2 = " << x2 << "\n";
        } else if (d == 0) {
            double x = -b / (2 * a);
            std::cout << "Один корень: x = " << x << "\n";
        } else {
            std::cout << "Нет действительных корней\n";
        }
    }
 
    return 0;
}


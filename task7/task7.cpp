#include <iostream>
 
int main() {
    int a, b, c;
    std::cout << "Введите сторону a: "; std::cin >> a;
    std::cout << "Введите сторону b: "; std::cin >> b;
    std::cout << "Введите сторону c: "; std::cin >> c;
 
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            std::cout << "Тип: равносторонний\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Тип: равнобедренный\n";
        } else {
            std::cout << "Тип: разносторонний\n";
        }
    }
    else {
        std::cout << "Треугольник не существует\n";
    }
    return 0;
}


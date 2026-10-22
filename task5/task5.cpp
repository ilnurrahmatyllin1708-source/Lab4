#include <iostream>
 
int main() {
    double a, b;
    char operation;
 
    std::cout << "Первое число: "; std::cin >> a;
    std::cout << "Второе число: "; std::cin >> b;
    std::cout << "Операция (+, -, *, /): "; std::cin >> operation;
 
    switch (operation) {
        case '+':
            std::cout << a + b << "\n";
            break;
        case '-':
            std::cout << a - b << "\n";
            break;
        case '*':
            std::cout << a * b << "\n";
            break;
        case '/':
            if (b == 0) {
                std::cout << "Ошибка: деление на ноль невозможно\n";
            } else {
                std::cout << a / b << "\n";
            }
            break;
        default:
            std::cout << "Неизвестная операция\n";
    }
    return 0;
}

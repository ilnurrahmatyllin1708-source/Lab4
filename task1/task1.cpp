#include <iostream>
 
int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
 
    // Чётность
    if (number % 2 == 0) {
        std::cout <<"Число " << number << " чётное\n";
    } else {
        std::cout <<"Число " << number << " нечётное\n";
    }
 
    // Делимость на 3
    if (number % 3 == 0) {
        std::cout << "Число " << number << " делится на 3\n";
    } else {
        std::cout << "Число " << number << " не делится на 3\n";
    }

    // Знак числа
    if (number > 0) {
        std::cout << "Число " << number << " положительное\n";
    } else if (number < 0) {
        std::cout << "Число " << number << " отрицательное\n";
    } else {
        std::cout << "Число " << number << " равно нулю\n";
    }
 
    return 0;
}

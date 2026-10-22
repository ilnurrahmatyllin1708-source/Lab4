#include <iostream>
 
int main() {
    int age;
    std::cout << "Введите возраст: ";
    std::cin >> age;
 
    if (age < 0 || age > 130) {
        std::cout << "Некорректный возраст\n";
    } else if (age <= 12) {
        std::cout << "Ребёнок\n";
    } else if (age <= 17) {
        std::cout << "Подросток\n";
    } else if (age <= 64) {
        std::cout << "Взрослый\n";
    } else {
        std::cout << "Пожилой\n";
    }
    return 0;
}

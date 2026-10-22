#include <iostream>
 
int main() {
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;
 
    if ((year%4==0 && year%100!=0) || (year%400==0)) {
        std::cout << year << " год — високосный\n";
    } else {
        std::cout << year << " год — не високосный\n";
    }
 
    return 0;
}

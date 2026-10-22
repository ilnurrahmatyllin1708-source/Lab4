#include <iostream>
int main() {
    int month, year;
    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;
    std::cout << "Введите год: ";
    std::cin >> year;
    // определяем високосный год
    bool is_visokos= (year%4==0 && year%100!=0) || (year%400==0);
    int days;
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    days=31;
    break;
    case 4: case 6: case 9: case 11:
    days=30;
    break;
    case 2:
    days=is_visokos? 29:28; // тернарный оператор
    break;
    default:
    days=-1;
    }
// защита от некорректного ввода месяца
    if (days==-1) {
    std::cout <<"Некорректный номер месяца";
    } else {
    std::cout << "В "<< month <<" месяце " << year << " года: " << days << " дней";
}
    return 0;
}

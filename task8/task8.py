#вариант 6. Дни в месяце с учётом високосности
month = int(input("Введите номер месяца (1-12): "))
year = int(input("Введите год: "))
# Определяем високосность
is_visokos = (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
 
match month:
    case 1 | 3 | 5 | 7 | 8 | 10 | 12:
        days = 31
    case 4 | 6 | 9 | 11:
        days = 30
    case 2:
        days = 29 if is_visokos else 28     # тернарный оператор
    case _:
        days = 0

if days == 0: # защита от некорректного ввода
    print("Некорректный номер месяца")
else:
    print(f"В {month} месяце {year} года: {days} дней")


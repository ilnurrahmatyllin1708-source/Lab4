number = int(input("Введите число: "))
#проверка на четность
if number%2==0:
    print(f"число {number} — четное")
else:
    print(f"Число {number} — нечётное")
#проверка делимости на 3
if number%3==0:
    print(f'Число {number} — делится на 3')
else:
    print(f'Число {number} — не делится на 3')
#проверка числа на положительность или отрицательность
if number>0:
    print(f'Число {number} — положительное')
elif number==0:
    print(f'Число {number} — ноль')
else:
    print(f'Число {number} — отрицательное')

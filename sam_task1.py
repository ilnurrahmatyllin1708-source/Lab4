import random
chislo = random.randint(0,100)
print(f'Загаданное число — {chislo}')
while True:
    n = int(input('Введите число от 1 до 100: '))
    try:
        if n==chislo:
            print('Вы угадали число!')
            break
        elif n>chislo:
            print('меньше')
        elif n<chislo:
            print('больше')

    except ValueError:
        print('Ошибка нужно ввести целое число')
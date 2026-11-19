while True:
    n = (input('Введите число в 10 сс: '))
    try:
        n=int(n)
        print(f'Число в 2сс: {bin(n)[2:]}')
        print(f'Число в 8сс: {oct(n)[2:]}')
        print(f'Число в 16сс: {hex(n)[2:]}')
        break
    except ValueError:
        print('ОШИБКА! Введите целое число в 10сс:')
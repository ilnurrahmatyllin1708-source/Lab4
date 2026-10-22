# через if-elif-else
a= float(input('Введите первое число: '))
b= float(input('Введите второе число: '))
c= float(input('Введите третье число: '))
if a>=b and a>=c:
    maxx=a
elif b>=a and b>=c:
    maxx=b
else:
    maxx=c
print(f'Максимум (if-elif-else): {maxx}') 

# через встроенную функцию max()
print(f'Максимум ( max() ): {max(a,b,c)}')

#тернарный оператор
max_ab = a if a > b else b
max_ter = max_ab if max_ab > c else c
print(f"Максимум (тернарный) : {max_ter}")

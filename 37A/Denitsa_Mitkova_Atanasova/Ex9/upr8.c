#include <studio.h>

//zad1
numbers = []
for i in range(7):
    num = int(input("Въведи число: "))
    numbers.append(num)

print("Сума:", sum(numbers))

//zad2
numbers = []
for i in range(7):
    num = int(input("Въведи число: "))
    numbers.append(num)

print("Най-голямото число е:", max(numbers))

//zad3
numbers = []
for i in range(7):
    num = int(input("Въведи число: "))
    numbers.append(num)

average = sum(numbers) / 7
print("Средна стойност:", average)

//zad4
matrix = []
for i in range(3):
    row = []
    for j in range(3):
        num = int(input(f"Елемент [{i}][{j}]: "))
        row.append(num)
    matrix.append(row)

magic_sum = sum(matrix[0])
is_magic = True

for row in matrix:
    if sum(row) != magic_sum:
        is_magic = False

for col in range(3):
    col_sum = sum(matrix[row][col] for row in range(3))
    if col_sum != magic_sum:
        is_magic = False

if is_magic:
    print("Магически квадрат")
else:
    print("Не е магически квадрат")

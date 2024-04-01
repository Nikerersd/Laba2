def EvenDigits(number):
    count = 0
    while number > 0:
        digit = number % 10
        if digit % 2 == 0:
            count += 1
        number //= 10
    return count

n = int(input("Enter the number of numbers: "))
numbers = list(map(int, input("Enter the numbers separated by a space: ").split()))

for i in range(n):
    print(EvenDigits(numbers[i]), end="")
    if i < n - 1:
        print(" ", end="")
print()
factorial = 1
for i in range(1,101):
    factorial *= i
sumfactorial = 0
for i in str(factorial):
    sumfactorial += int(i)
print(sumfactorial)

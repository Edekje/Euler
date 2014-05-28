# Waarom moeilijk over overflows als python die niet kent?

def sumdigits(number):
	number = str(number)
	counter = 0
	for i in range(0, number.__len__()):
		counter += int(number[i])
	return counter

print(sumdigits(input("Sum the digits of: ")))

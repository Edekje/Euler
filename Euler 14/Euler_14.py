greatestchain = 1
greatestchainlength = 0

for i in range(2,1000000):
    stepcounter = 0
    num = i
    while(num!=1):
        if(num % 2 == 0):
            num = num / 2
        else:
            num = num*3 +1
        stepcounter += 1
    if(stepcounter>greatestchainlength):
        greatestchainlength = stepcounter
        greatestchain = i
        print(greatestchain)
print(greatestchain)

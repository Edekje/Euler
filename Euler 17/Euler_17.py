def bewoord(driecijfer):
    if(driecijfer < 20):                                            # Doe eerst de speciale gevallen (1-19, de tientallen)
        return eentotnegentien[driecijfer-1]
    
    if(driecijfer < 100):
        return tientallen[int(driecijfer / 10 - 2)] + '-' + eentotnegentien[driecijfer%10-1] if driecijfer % 10 != 0 else ''

    if(driecijfer == 1000):
        return 'one thousand'
    honderdtal = int(driecijfer / 100)                              # Breek het getal nogmaals op in nog kleinere stukken
    tiental = int(driecijfer % 100 / 10)
    enkeltal = int(driecijfer % 10)

    driecijfervoluit = ''                                           # Maak driecijfervoluit alvast

    if(honderdtal > 0):
        driecijfervoluit = bewoord(honderdtal) + ' hundred'          # Schrijf de honderdtallen alvast op

    if(enkeltal != 0 and tiental <= 1):                                         # Als na de honderdtal het tussen de 1 en 19 ligt
        driecijfervoluit = driecijfervoluit + ' and ' + bewoord(tiental * 10 + enkeltal)
        return driecijfervoluit
    
    if(tiental >= 2 and enkeltal > 0):                              # twenty-99 with numerals behind
        driecijfervoluit = driecijfervoluit + ' and '+ bewoord(tiental * 10) + '-' + bewoord(enkeltal)
        
                                                                            # Return antwoord
    return driecijfervoluit

eentotnegentien = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                   "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]

tientallen = ['twenty', 'thirty', 'fourty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety']

oneto1000 = ""

for i in range(1, 1001):
    oneto1000 += bewoord(i)
    print(bewoord(i))

output = ""

for i in list(oneto1000):
    if(i!=' ' and i != '-'):
        output += i

print(output, output.__len__())

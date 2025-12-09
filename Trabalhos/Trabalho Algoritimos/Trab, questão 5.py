num_final = int(input("Escreva algum número: "))
cont = 0
for cont in range (1, (num_final+1)):
    if cont%3 == 0:
        print("O número " ,cont, "é divisível por 3")
    if cont%5 == 0:
        print("O número ", cont, "é divisível por 5")
            
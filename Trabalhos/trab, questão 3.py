lado1 = int(input("Escrava o valor do lado: "))
lado2 = int(input("Escreva o valor de outro lado: "))
lado3 = int(input("Escreva o valor do último lado: "))
soma1 = lado1+lado2
soma2 = lado2+lado3
soma3 = lado1+lado3
if soma1>lado3:
    if soma2>lado1:
        if soma3>lado2:
            print("Esses valores formam um triângulo")
else:
    print("Esses valores não formam uma triângulo")
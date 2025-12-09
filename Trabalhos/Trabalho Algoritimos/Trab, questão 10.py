palavra1 = str(input("Escreva uma palavra: "))
palavra2 = (palavra1[::-1])
if palavra1==palavra2:
    print("A palavra é palíndromo =)")
else:
    print("A palavra não é palíndromo =(")

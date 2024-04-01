y = []
x = int(input("Escreva um número: "))
while x>0:
    y.insert(0, x)
    x = int(input("Escreva outro número: "))
print("A quantidade de número digitados é de: ",(len(y)+1))
print("O menor número digitado é: ", x)
print("O maior número digitado é: ", max(y))
print("A soma dos números digitados é: ", sum(y))
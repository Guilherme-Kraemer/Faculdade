numero_inteiro = int(input("Escreva o número inteiro de quatro dígitos: "))
if numero_inteiro>9999:
    print("Esse número é inválido")
else:
    unidade = numero_inteiro%10
    dezena = (numero_inteiro//10)%10
    centena = (numero_inteiro//100)%10
    milhar = (numero_inteiro//1000)%10
print("O dígito de unidade é: ", unidade)
print("O dígito de dezena é: ", dezena)
print("O dígito de centena é: ", centena)
print("O dígito de milhar é: ", milhar)
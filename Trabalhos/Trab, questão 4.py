num = int(input("Escreva o número desejado: "))
contagem = 0
res_soma = 0
res_par = 0
res_impar = 0
for contagem in range(0, (num+1)):
    res_soma = res_soma+contagem
    if (contagem%2) == 0:
        res_par = res_par+contagem
    else:
        res_impar = res_impar+contagem
print("A soma total dos números é: ", res_soma)
print("A soma total dos números pares é: ", res_par)
print("A soma total dos números ímpares é: ", res_impar)
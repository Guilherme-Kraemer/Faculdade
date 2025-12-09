#vou usar (num) como variável, referente ao número digitado pelo usuário
num_digi = int(input("escreva um número inteiro e que queira saber o correspodente em binário: "))
x = 0
#usar y para a função lista
y = []
while (num_digi>0):
    x = num_digi%2
    y.insert(0, x)
    num_digi = (num_digi//2)
num_bi = "".join([str(item)for item in y])
print("O correspondente em binário é: ", num_bi)
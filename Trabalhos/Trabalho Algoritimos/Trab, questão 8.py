n = int(input("Digite um número inteiro positivo: "))
if n > 10:
  n = 10
for i in range(1, n+1):
  for j in range(i, i+n):
    print(j, end=" ")
  print()
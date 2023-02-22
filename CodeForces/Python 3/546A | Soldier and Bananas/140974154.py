preco_total = 0
numeros = input("").split()
preco_inicial = int(numeros[0])
dinheiro_disponivel = int(numeros[1].strip())
quantidade_de_bananas = int(numeros[2].strip())
 
for sequencia in range (1, quantidade_de_bananas + 1):
    preco_total += preco_inicial * sequencia
 
if preco_total < dinheiro_disponivel:
    a_emprestar = 0
else:
    a_emprestar = preco_total - dinheiro_disponivel
print(a_emprestar)
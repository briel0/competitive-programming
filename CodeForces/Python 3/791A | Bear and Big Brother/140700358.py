pesos = input("").split()
peso_1 = int(pesos[0])
peso_2 = int(pesos[1].strip())
anos_necessarios = 0
while peso_2 >= peso_1:
    peso_1 = peso_1 * 3
    peso_2 = peso_2 * 2
    anos_necessarios += 1
print(anos_necessarios)
entrada = int(input(""))
quartos_disponiveis = 0
for sequencia in range (entrada):
    entrada_1 = input("").split()
    result = int(entrada_1[1]) - int(entrada_1[0])
    if (result >= 2):
        quartos_disponiveis += 1
print(quartos_disponiveis)
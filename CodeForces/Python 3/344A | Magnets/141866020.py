entrada = int(input(""))
lista = []
grupos = 1
for sequencia in range (entrada):
    entrada_1 = input("")
    if (lista == []):
        lista.append(entrada_1)
    elif (lista != []):
        lista.append(entrada_1)
        if (entrada_1 != lista[sequencia - 1]):
            grupos += 1
 
print(grupos)
 
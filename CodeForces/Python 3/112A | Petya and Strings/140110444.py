lista = []
valor = 0
string_1 = input("")
string_2 = input("")
tamanho = len(string_1)
for sequencia in range (0, tamanho):
    letra_1 = string_1[sequencia]
    letra_2 = string_2[sequencia]
    if (letra_1.upper() != letra_2.upper()):
        lista.append(letra_1.upper())
        lista.append(letra_2.upper())
        lista_1 = sorted(lista)
        if (lista_1[0] == letra_1.upper()):
            valor = -1
        elif (lista_1[0] == letra_2.upper()):
            valor = 1
        break
print(valor)
 
 
 
 
 
 
 
 
numero = int(input(""))
numero += 1
lista = []
lista_1 = []
 
for sequencia in range (4):
    digito = str(numero)[sequencia]
    lista.append(digito)
 
for sequencia in range (4):
    digito = str(numero)[sequencia]
    if digito not in lista_1:
        lista_1.append(digito)
 
while (lista != lista_1):
    numero += 1
    lista.clear()
    lista_1.clear()
    for sequencia in range(4):
        digito = str(numero)[sequencia]
        lista.append(digito)
    for sequencia in range(4):
        digito = str(numero)[sequencia]
        if digito not in lista_1:
            lista_1.append(digito)
 
print(numero)
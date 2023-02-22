quantidade_de_operacoes = input("")
lista = []
numero = 0
for sequencia in range (0, int(quantidade_de_operacoes)):
    lista.append(input(""))
for operacoes in lista:
    a = operacoes
    if a == "X--" or a == "--X":
        numero -= 1
    if a == "++X" or a == "X++":
        numero += 1
print(numero)
 
 
 
 
 
 
 
 
 
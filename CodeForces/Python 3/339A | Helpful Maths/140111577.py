lista = []
conta = input("")
tamanho = len(conta)
for sequencia in range (0, tamanho):
    variavel = conta[sequencia]
    if (variavel != "+"):
        lista.append(variavel)
lista_1 = sorted(lista)
print(*lista_1, sep="+")
 
 
 
 
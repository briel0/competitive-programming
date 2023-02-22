nomes = []
lista = []
numero = int(input(""))
 
for sequencia in range(0, numero):
    nomes.append(input(""))
 
for sequencia_1 in range(0, numero):
    a = nomes[sequencia_1]
    if(len(a) > 10):
        c = len(a) - 2
        lista.append(a[0] + str(c) + a[-1])
    else:
        lista.append(a)
 
for sequencia_2 in range(0, numero):
    print(lista[sequencia_2])
 
 
 
 
 
 
 
 
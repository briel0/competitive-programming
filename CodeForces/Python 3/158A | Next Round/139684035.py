nk = input("").split()
notas = input("").split()
passarao = 0
 
participantes = int(nk[0])
minimo = int(nk[1]) - 1
 
for sequencia in range(0, participantes):
    if int(notas[sequencia]) >= int(notas[minimo]) and int(notas[sequencia]) != 0:
        passarao += 1
 
print(passarao)
 
 
 
 
 
 
 
 
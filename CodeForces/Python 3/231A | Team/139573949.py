numero_de_problemas = int(input(""))
problemas = 0
 
for sequencia in range(0, numero_de_problemas):
    numero_de_um = 0
    possibilidades = input("")
    for sequencia_1 in range(0, 5):
        if possibilidades[sequencia_1] == "1":
            numero_de_um += 1
    if numero_de_um >= 2:
        problemas += 1
 
print(problemas)
 
 
 
 
 
 
 
 
 
 
 
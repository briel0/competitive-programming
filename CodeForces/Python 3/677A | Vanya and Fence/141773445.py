entrada = input("").split()
altura_dos_amigos = input("").split()
largura = 0
for sequencia in range (int(entrada[0])):
    altura = int(altura_dos_amigos[sequencia])
    if (altura > int(entrada[1])):
        largura += 2
    elif (altura <= int(entrada[1])):
        largura += 1
print(largura)
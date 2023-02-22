entrada = input("").split()
numero = int(entrada[0])
for sequencia in range (int(entrada[1])):
    digito = str(int(numero))[-1]
    if (digito != "0"):
        numero -= 1
    elif (digito == "0"):
        numero /= 10
print(int(numero))
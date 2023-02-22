result = ''
numero_1 = input('')
numero_2 = input('')
for sequencia in range (len(numero_2)):
    condicao = numero_1[sequencia] == numero_2[sequencia]
    if (condicao == True):
        result = result + "0"
    elif (condicao == False):
        result = result + "1"
print(result)
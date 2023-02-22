numero_de_maiusculas = 0
numero_de_minusculas = 0
maiusculas = []
minusculas = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for sequencia in range (len(minusculas)):
    maiusculas.append(minusculas[sequencia].upper())
nome = input('')
for sequencia_1 in range (len(nome)):
    letra = nome[sequencia_1]
    if letra in maiusculas:
        numero_de_maiusculas += 1
    elif letra in minusculas:
        numero_de_minusculas += 1
 
if numero_de_maiusculas > numero_de_minusculas:
    print(nome.upper())
elif numero_de_minusculas > numero_de_maiusculas:
    print(nome.lower())
elif numero_de_minusculas == numero_de_maiusculas:
    print(nome.lower())
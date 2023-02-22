letras = []
nome = input('')
for letra in nome:
    if letra not in letras:
        letras.append(letra)
if len(letras) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
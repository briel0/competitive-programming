numero_de_paradas = int(input(""))
numero_maximo_de_passageiros = 0
numero_passageiros = 0
for sequencia in range (numero_de_paradas):
    entrada_inicial = input("").split()
    numero_passageiros = numero_passageiros - int(entrada_inicial[0])
    numero_passageiros = numero_passageiros + int(entrada_inicial[1])
    if (numero_passageiros > numero_maximo_de_passageiros):
        numero_maximo_de_passageiros = numero_passageiros
 
print(numero_maximo_de_passageiros)
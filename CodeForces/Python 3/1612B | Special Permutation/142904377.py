num_testes = int(input(""))
 
for sequencia_testes in range (num_testes):
    num_elementos, min_esquerda, max_direita = map(int, input("").split())
    lista_num = [min_esquerda]
    for sequencia_colocando in range (num_elementos, 0, -1):
        if sequencia_colocando != min_esquerda and sequencia_colocando != max_direita:
            lista_num.append(sequencia_colocando)
    lista_num.append(max_direita)
    condicao = min(lista_num[0:num_elementos//2]) == min_esquerda and max(lista_num[num_elementos//2:num_elementos]) == max_direita
    if len(lista_num) == num_elementos and condicao == True:
        print(*lista_num)
    else:
        print("-1")
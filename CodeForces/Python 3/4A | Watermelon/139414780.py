peso = int(input(""))
if peso != 1:
    for sequencia in range(1, peso):
        a = sequencia
        b = peso - sequencia
        if (peso == 1):
            condicao == False
        condicao = a % 2 == 0 and b % 2 == 0
        if(condicao == True):
            print("YES")
            break
    if(condicao == False):
        print("NO")
else:
    print("NO")
 
 
 
 
 
 
 
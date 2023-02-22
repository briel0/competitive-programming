mn = input("").split()
area_total = int(mn[0]) * int(mn[1])
if area_total % 2 == 0:
    quadrados = area_total / 2
elif area_total % 2 != 0:
    area_total -= 1
    quadrados = area_total / 2
print(int(quadrados))
 
 
 
 
 
 
 
 
 
#include <iostream>
using namespace std;
 
int main(){
 
float times, total = 0, contador = 0;
 
cin >> times;
 
for(int i = 0; i < times; i++){
    float porcent;
    cin >> porcent;
    total = total + porcent;
    contador ++;
 
}
 
float result = total / contador;
 
cout << result << "\n";
 
return 0;
}
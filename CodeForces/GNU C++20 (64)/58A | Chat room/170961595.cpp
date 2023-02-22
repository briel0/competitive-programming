#include <iostream>
using namespace std;
 
int main(){
 
string base_string = "hello";
 
string entrada;
 
string check;
 
cin >> entrada;
 
int comp = 0;
 
for(int i = 0; i <= entrada.length(); i++){
    char letra_atual = entrada[i];
 
    char char_atual = base_string[comp];
 
    if((letra_atual == char_atual) && base_string.length() != check.length()){
        check = check + letra_atual;
        comp++;
    }
}
 
if(check == base_string){
    cout << "YES";
}
else{
    cout << "NO";
}
 
return 0;
}
#include <iostream>
using namespace std;
 
int main(){
 
int n;
 
string result;
 
int luckys[12] = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
 
cin >> n;
 
for(int i = 0; i < 10; i++){
    int atual = luckys[i];
 
    if(n%atual == 0){
        result = "YES";
        break;
    }
 
    else{
        result = "NO";
    }
 
        if(atual > n ){
        break;
    }
 
}
 
cout << result;
}
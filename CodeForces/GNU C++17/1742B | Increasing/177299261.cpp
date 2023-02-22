#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int ent, tam, check;
cin >> ent;
 
for(int i = 0; i < ent; i++){
    check = 0;
    cin >> tam;
    int nums[tam];
    
    for(int a = 0; a < tam; a++){
        cin >> nums[a];
    }
    
    sort(nums, nums + tam);
    
    for(int a = 0; a < (tam - 1); a++){
        if(nums[a] < nums[a + 1]){
            check++;
        }
    }
    
    if(check == (tam - 1)){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
 
    
return 0;
}
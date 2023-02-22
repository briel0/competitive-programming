#include <iostream>
#include <string>
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        int l;
        cin >> l >> s;
        int max = 0;
        for(int a = 0; a < l; a++){
            char o = s[a];
            int c = (int)o - 96;
            if(c > max){
                max = c;
            }
        }
        cout << max << "\n";
    }
    
return 0;
}
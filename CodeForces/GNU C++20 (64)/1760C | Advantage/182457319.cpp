#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a1[n], a2[n];
  
        for(int a = 0; a < n; a++){
            int prov;
            cin >> prov;
            a1[a] = prov;
        }
  
  copy(a1, a1 + n, a2);  
        sort(a2, a2+n);
  
        for(int a = 0; a < n; a++){
            if(a1[a] != a2[n-1]){
                cout << a1[a] - a2[n - 1] << " ";
            }
            else{
                cout << a1[a] - a2[n - 2] << " ";
            }
        }
    }
    
return 0;
}
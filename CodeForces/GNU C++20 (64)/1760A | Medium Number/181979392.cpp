#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int a[3];
        for(int b = 0; b < 3; b++){
            cin >> a[b];
        }
        sort(a, a+3);
        cout << a[1] << "\n";
    }
 
 
return 0;
}
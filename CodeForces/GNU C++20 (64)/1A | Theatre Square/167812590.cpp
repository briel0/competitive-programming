#include <iostream>
using namespace std;
 
int main(){
 
long long n, m, a, cont_1 = 0, cont_2 = 0;
 
cin >> n >> m >> a;
 
while(n > 0){
    n = n - a;
    cont_1++;
}
 
while(m > 0){
    m = m - a;
    cont_2++;
}
 
cout << cont_1 * cont_2;
 
return 0;
}
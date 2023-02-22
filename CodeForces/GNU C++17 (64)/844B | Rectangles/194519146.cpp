#include <iostream>
using namespace std;
 
long long p(long long  x)
{
    long long s = 1, i;
    for(i=0; i < x; i++)
        s = (s*2);
    return s;
}
 
int main(){
 
long long n, m, r = 0;
cin >> n >> m;
long long s[n][m];
 
for(int i = 0; i < n; i++){
 for(int a = 0; a < m; a++){
  cin >> s[i][a];
 }
}
 
for(int i = 0; i < n; i++){
 long long c[2] = {}; 
 for(int a = 0; a < m; a++){
  c[s[i][a]]++;
 }
 r += (p(c[0]) - 1);
 r += (p(c[1]) - 1);
}
 
for(int i = 0; i < m; i++){
 long long c[2] = {}; 
 for(int a = 0; a < n; a++){
  c[s[a][i]]++;
 }
 r += (p(c[0]) - 1);
 r += (p(c[1]) - 1);
}
 
cout << r - (m*n);
 
return 0;
}
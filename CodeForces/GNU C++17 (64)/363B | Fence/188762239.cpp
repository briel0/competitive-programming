#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int n, k;
 cin >> n >> k;
 int y = (n-k)+1;
 int e[n], s[y];
 
 for(int i = 0; i < n; i++){
  cin >> e[i];
 }
 
 int p = 0;
 for(int a = 0; a < k; a++){
  p += e[a];
 }
 //cout << p << "\n";
 s[0] = p;
 int h = p, f = 0;
 
 for(int i = 1; n - (i+1) >= (k-1); i++){
  //cout << i << " " << s[i-1] - e[i-1] + e[i+k-1] << "\n";
  s[i] = s[i-1] - e[i-1] + e[i+k-1];
  if(s[i] < h){
   h = s[i];
   f = i;
  }
 }
 cout << f + 1;
return 0;
}
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int n, m, c[51] = {};
  cin >> n >> m;
  map<int, int> y;
  for(int i = 0; i < n; i++){
   int w, q; cin >> w >> q;
   if(w <= m && q >= m){
    y[w] = q;
    for(int a = w; a <= q; a++){
     c[a]++;
    }
   }
  }
  if(c[m] == 0){
   cout << "NO\n"; 
  }
  else{
   int f = 0;
   for(int i = 0; i < 51; i++){
    if(c[i] == *max_element(c, c+51)){
     f++;
    }
   }
   if(f == 1){
    cout << "YES\n";
   }
   else{
    cout << "NO\n";
   }
  }
 }
 
return 0;
}
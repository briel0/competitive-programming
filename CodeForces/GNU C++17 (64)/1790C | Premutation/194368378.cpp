#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  int g[n][n-1];
  int y[n+1] = {};
  
  for(int i = 0; i < n; i++){
   for(int a = 0; a < (n-1); a++){
    cin >> g[i][a];
    if(a == 0){
     y[g[i][a]]++;
    }
   }
  }
  
  int w = *max_element(y, y+(n+1));
  int o = find(y, y+(n+1), w) - y;
  
  cout << o << " ";
  for(int i = 0; i < n; i++){
   if(g[i][0] != o){
    for(int a = 0; a < n-1; a++){
     cout << g[i][a] << " ";
    }
   } 
  }
  cout << endl;
 }
 
return 0;
}
#include <iostream>
using namespace std;
 
int main(){
 
 int n, c = 0, m = 0, l = 1;
 cin >> n;
 int t[n], g[n];
 
 for(int i = 0; i < n; i++){
  cin >> t[i];
 }
 
 for(int i = 0; i < n; i++){
  c += t[i];
  if(i != 0){
   if(c >= g[i - 1] + t[i - 1]){
    l++;
   }
   else{
    l = 1;
    c = 0;
   }
  }
  m = max(m, l);
  g[i] = c;
 }
 cout << m;
 
return 0;
}
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n, r = 0; cin >> n;
  int s[n];
  for(int i = 0; i < n; i++){
   int u; cin >> u;
   if(u%2==0){
    s[i] = 0;
   }
   else{
    s[i] = 1;
   }
  }
  for(int i = 0; i < n-1; i++){
   if(s[i] == s[i+1]){
    r++;
   }
  }
  cout << r << "\n";
 }
 
return 0;
}
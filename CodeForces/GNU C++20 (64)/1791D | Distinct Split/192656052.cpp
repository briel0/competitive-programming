#include <iostream>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  string s; cin >> s;
  int ce = 0, cd = 0, u = 0, cle[123] = {}, cld[123] = {};
  for(int i = 0; i < n; i++){
   cld[s[i]]++;
   if(cld[s[i]] == 1){
    cd++;
   }
  }
  for(int i = 0; i < (n-1); i++){
   cle[s[i]]++;
   cld[s[i]]--;
   if(cle[s[i]] == 1){
    ce++;
   }
   if(cld[s[i]] == 0){
    cd--;
   }
   if(cd + ce > u){
    u = cd + ce;
   }
  }
  cout << u << "\n";
 }
 
}
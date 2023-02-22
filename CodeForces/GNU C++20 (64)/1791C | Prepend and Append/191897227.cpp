#include <iostream>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  string s; cin >> s;
  int y = n - 1, u = n;
  for(int i = 0; i < n; i++){
   if(s[i] != s[y]){
    u = u - 2;
    y = y - 1;
    if(u == 0){
     break;
    }
   }
   else{
    break;
   }
  }
  cout << u << "\n";
 }
}
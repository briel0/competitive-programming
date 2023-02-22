#include <iostream>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  string s; cin >> s;
  int x = 0, y = 0;
  bool c = false;
  for(int i = 0; i < n; i++){
   if(s[i] == 'L'){
    x = x - 1;
   }
   else if(s[i] == 'R'){
    x = x + 1;
   }
   else if(s[i] == 'U'){
    y = y + 1;
   }
   else if(s[i] == 'D'){
    y = y - 1;
   }
   if(x == 1 && y == 1){
    c = true;
    break;
   }
  }
  if(c){
   cout << "YES" << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 }
}
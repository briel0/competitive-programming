#include <iostream>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  int s[n], u = 0;
  for(int i = 0; i < n; i++){
   cin >> s[i];
   u += s[i];
  }
  bool f = true;
  for(int i = 1; i < n; i++){
   if(s[i-1] == -1 && s[i] == -1){
    s[i-1] = 1;
    s[i] = 1;
    u += 4;
    f = false;
    break;
   }
  }
  if(f){
   for(int i = 1; i < n; i++){
    if(s[i-1] != s[i]){
     swap(s[i-1], s[i]);
     f = false;
    }
   }
  }
  if(f){
   u += -4;
  }
  cout << u << "\n";
 }
 
return 0;
}
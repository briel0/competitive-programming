#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n, m; cin >> n >> m;
  string sn, sm; cin >> sn >> sm;
  reverse(sm.begin(), sm.end());
  string s = sn + sm;
  //cout << s << "\n";
  for(int i = 0; i < (n+m); i++){
   if(s[i] == s[i+1]){
    sn = s.substr(0, i+1);
    //cout << sn << "\n";
    sm = s.substr(i+1, ((n+m) - i+1));
    //cout << sm << "\n";
   }
  }
  bool cn = true;
  bool cm = true;
  for(int i = 0; i < sn.length(); i++){
   if(sn[i] == sn[i+1]){
    //cout << "a" << "\n";
    cn = false;
   }
  }
  for(int i = 0; i < sm.length(); i++){
   if(sm[i] == sm[i+1]){
    //cout << "b" << "\n";
    cm = false;
   }
  }
  if(cn == true && cm == true){
   cout << "YES" << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 }
 
 return 0;
}
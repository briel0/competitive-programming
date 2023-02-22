#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n, m; cin >> n >> m;
  string sn, sm; cin >> sn >> sm;
  reverse(sm.begin(), sm.end());
  string s = sn + sm;
  //cout << s << "\n";
  int u = 0;
  for(int i = 0; i < (n+m); i++){
   if(s[i] == s[i+1]){
    u++;
   }
  }
  cout << (u <= 1 ? "YES\n" : "NO\n");
 }
 
 return 0;
}
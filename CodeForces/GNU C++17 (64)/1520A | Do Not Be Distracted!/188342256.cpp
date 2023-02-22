#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int n, l[26] = {};
  string s;
  bool c = true;
  cin >> n >> s;
  l[s[0] - 'A']++;
  for(int i = 1; i < n; i++){
   if(s[i-1] != s[i]){
    l[s[i] - 'A']++;
    if(l[s[i] - 'A'] == 2){
     c = false;
     break;
    }
   }
  }
  if(c){
   cout << "yes" << "\n";
  }
  else{
   cout << "no" << "\n";
  }
 }
 
return 0;
}
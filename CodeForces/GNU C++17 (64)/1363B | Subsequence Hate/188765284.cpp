#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  string s;
  cin >> s;
  int n1 = 0, n0 = 0, o = 1000;
  for(int i = 0; i < s.length(); i++){
   if(s[i] == '0'){
    n0++;
   }
   else{
    n1++;
   }
  }
  int a1 = 0, a0 = 0;
  for(int i = 0; i < s.length(); i++){
   if(s[i] == '0'){
    a0++;
   }
   else{
    a1++;
   }
   o = min(o, min(a1 + (n0 - a0), a0 + (n1 - a1) ));
  }
  //joooj
  cout << o << "\n";
 }
 
return 0;
}
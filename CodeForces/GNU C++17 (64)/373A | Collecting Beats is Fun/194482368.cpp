#include <iostream>
using namespace std;
 
int main(){
 
 int k, s[10] = {};
 cin >> k;
 bool g = true;
 for(int i = 0; i < 16; i++){
  char e;
  cin >> e;
  if(e != '.'){
   s[e - '0']++;
   if(s[e - '0'] > k*2){
    g = false;
    break;
   }
  }
 }
 
 cout << (g ? "YES\n" : "NO\n");
 
return 0;
}
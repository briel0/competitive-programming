#include <iostream>
using namespace std;
 
int main(){
 
 long long t;
 cin >> t;
 for(int i = 0; i < t; i++){
  long long n, sp = 0, sn = 0;
  cin >> n;
  for(int a = 0; a < n; a++){
   long long w;
   cin >> w;
   if(w > 0){
    sp += w;
   }
   else{
    sn += w;
   }
  }
  cout << abs(abs(sp) - abs(sn)) << "\n";
 }
 
return 0;
}
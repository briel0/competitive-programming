#include <iostream>
using namespace std;
 
bool ie(int n){
 int c = 0;
 for(int i = 2; n >= i*i; i++){
  if(n % i == 0){
   c = 1;
   break;
  }
 }
 if(c == 0 || n == 2){
  return true;
 }
 else{
  return false;
 }
}
 
int main(){
 
 int t, n, m, s;
 cin >> t;
 
 for(int i = 0; i < t; i++){
  m = 1;
  cin >> n;
  bool f = true;
  while(f){
   m++;
   s = n + m;
   bool cs = ie(s);
   if(cs == false){
    bool cm = ie(m);
    if(cm == true){
     cout << m << "\n";
     break;
    }
   }
   
  }
 }
 
return 0;
}
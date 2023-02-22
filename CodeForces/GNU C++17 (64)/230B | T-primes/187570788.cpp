#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  long long c;
  cin >> c;
  bool p = true;
  
  if(int(sqrt(c)) == sqrt(c) && c != 1){
   c = sqrt(c);
   for(int i = 2; i*i <= c; i++){
    if(int(c) % i == 0){
     p = false;
     break;
    }
   } 
  }
  else{
   p = false;
  }
  if(p){
   cout << "YES" << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 } 
return 0;
}
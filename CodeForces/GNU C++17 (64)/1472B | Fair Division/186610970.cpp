#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int p, c1 = 0, c2 = 0, e;
  cin >> p;
  int n[p];
  for(int i = 0; i < p; i++){
   cin >> n[i];
  }
  sort(n, n + p, std::greater<>());
  for(int i = 0; i < p; i++){
   e = n[i];
   if(c1 == c2){
    c1 += e;
   }
   else if(c1 < c2){
    c1 += e;
   }
   else if(c2 < c1){
    c2 += e;
   }
  }
  if(c1 == c2){
   cout << "YES" << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 }
 
return 0;
}
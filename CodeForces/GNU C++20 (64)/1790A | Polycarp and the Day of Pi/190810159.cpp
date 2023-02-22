#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 string p = "314159265358979323846264338327";
 while(t--){
  string y;
  cin >> y;
  int u = 0;
  for(int i = 0; i < y.length(); i++){
   if(y[i] == p[i]){
    u++;
   }
   else{
    break;
   }
  }
  cout << u << "\n";
 }
 
 
return 0;
}
#include <iostream>
using namespace std;
 
int main(){
 
 int n, k, p, r = 0;
 cin >> n >> k;
 
 for(int i = 0; i < n; i++){
  cin >> p;
  if(p <= k){
   r++;
  }
  if(p > k){
   if(p % k == 0){
    r += (p / k);
   }
   else{
    r += (p / k);
    r++;
   }
  }
 }
 if(r % 2 == 0){
  cout << r/2;
 }
 else{
  cout << (r / 2) + 1;
 }
 
return 0;
}
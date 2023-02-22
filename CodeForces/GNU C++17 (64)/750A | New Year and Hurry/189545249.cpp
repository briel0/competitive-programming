#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int n, k, r = 0;
 cin >> n >> k;
 int s[n+1];
 s[0] = 235;
 
 for(int i = 1; i < n; i++){
  s[i] = s[i-1] - ((i+1)*5);
  //cout << s[i] << "\n";
 }
 
 for(int a = 0; a < n; a++){
  if(a > r && s[a] < s[r] && s[a] >= k){ 
   r = a;
  }
 }
 
 if(k > 235){
  cout << 0;
 }
 else{
  cout << r+1;
 }
 
return 0;
}
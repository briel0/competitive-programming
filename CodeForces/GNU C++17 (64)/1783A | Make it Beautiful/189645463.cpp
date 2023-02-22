#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  int s[n], r[n];
  for(int i = 0; i < n; i++){
   cin >> s[i];
  }
  sort(s, s+n);
  int p = 0, b = (n-1);
  for(int i = 0; i < n; i++){
   if(i % 2 == 0){
    r[i] = s[p];
    p++;
   }
   else{
    r[i] = s[b];
    b--;
   }
  }
  bool l = true;
  int y = 0;
  for(int i = 1; i < n; i++){
   y += r[i-1];
   if(y == r[i]){
    l = false;
    break;
   }
  }
  if(l){
   cout << "YES" << "\n";
   for(int i = 0; i < n; i++){
    cout << r[i] << " ";
   }
   cout << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 }
 
return 0;
}
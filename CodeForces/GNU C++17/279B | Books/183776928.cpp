#include <iostream>
using namespace std;
 
int main(){
 int n, t, c = 0, e = 0, m = 0;
 cin >> n >> t;
 int b[n];
 
 for(int i = 0; i < n; i++){
  cin >> b[i];
 }
 
 for(int i = 0; i < n; i++){
  c += b[i];
  if(c <= t){
   m = max(m, (i + 1) - e);
  }
  else{
   c = c - b[e];
   e++;
  }
  
 }
 
 cout << m;
 
return 0;
}
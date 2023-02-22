#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  int b = n;
  int c[n];
  for(int i = n; i >= 1; i--){
   c[i-1] = i;
  }
  if(n%2!=0) swap(c[n/2], c[(n/2)+1]);
  for(int i = n; i >= 1; i--){
   cout << c[i-1] << " ";
  }
  cout << "\n";
 }
 
return 0;
}
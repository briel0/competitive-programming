#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int a, l;
  cin >> a >> l;
  if(a > l) swap(a, l);
  cout << max(l, a*2) * max(l, a*2) << "\n";
 }
 
return 0;
}
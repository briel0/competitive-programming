#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  int a, l;
  cin >> a >> l;
  int h = min(a, l) * 2, e = max(a, l);
  int x = min(h, e) + (max(h, e) - min(h, e));
  cout << x * max(h, e) << "\n";
 }
 
return 0;
}
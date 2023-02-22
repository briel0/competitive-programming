#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int n, l;
 cin >> n >> l;
 
 double a[n];
 
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 
 sort(a, a + n);
 
 double m = 0;
 
 for(int i = 1; i < n; i++){
  m = max(m, a[i] - a[i - 1]);
 }
 
 m = m/2;
 
 double p = (l * 1.0) - a[n - 1];
 
 m = max(max(p, a[0]), m);
 
 cout.precision(20);
 cout << m;
 
return 0;
}
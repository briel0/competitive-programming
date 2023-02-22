#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
 
int main(){
 
 long long t, c;
 cin >> t;
 long long n[t];
 
 for(int i = 0; i < t; i++){
  cin >> n[i];
 }
 
 long long m = *max_element(n, n + t), u = *min_element(n, n + t);
 
 if(t == 2 && m == u){
  c = 1;
 }
 else if(t > 2 && m == u){
  c = (pow(count(n, n + t, m), 2) - count(n, n + t, m)) / 2;
 }
 else{
  c = count(n, n + t, m) * count(n, n + t, u);
 }
 cout << m - u << " " << c; 
 
return 0;
}
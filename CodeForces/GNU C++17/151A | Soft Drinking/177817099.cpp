#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 int n, k, l, c, d, p, nl, np;
 
 cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
 int t[3] = {((k * l) / nl), (c * d), (p / np)};
 
 cout << (*min_element(t, t+3) / n);
 
 return 0;
}
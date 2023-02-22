#include <iostream>
using namespace std;
 
int main(){
 
 int n; cin >> n;
 int e[n][2];
 for(int i = 0; i < n; i++){
  cin >> e[i][0] >> e[i][1];
 }
 cout << ((n-4)/2) << "\n";
 
return 0;
}
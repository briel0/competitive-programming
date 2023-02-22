#include <iostream>
#include <vector>
using namespace std;
 
bool p(int n){
 if(n%2 == 0){
  return true;
 }
 return false;
}
 
int main(){
 
 int t; cin >> t;
 while(t--){
  int n; cin >> n;
  vector<int> y;
  
  for(int i = 0; i < n; i++){
   int h; cin >> h;
   y.push_back(h);
  }
  
  bool g = true;
  while(g){
   bool r = true;
   for(int i = 0; i < (y.size()-1); i++){
    if(p(y[i]) == p(y[i+1])){
     int o = y[i]*y[i+1];
     y.erase(y.begin()+i);
     y.erase(y.begin()+i);
     y.insert(y.begin()+i, o);
     r = false;
    }
   }
   if(r){
    g = false;
   }
  } 
  cout << n - y.size() << "\n";
 }
 
return 0;
}
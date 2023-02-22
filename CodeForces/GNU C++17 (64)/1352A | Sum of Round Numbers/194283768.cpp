#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  string n;
  cin >> n;
  vector<int> s;
  reverse(n.begin(), n.end());
  for(int i = 0; i < n.length(); i++){
   if(n[i] != '0'){
    int a = n[i] - '0';
    s.push_back(a*pow(10, i));
   }
  }
  cout << s.size() << "\n";
  for(int i = s.size()-1; i >= 0; i--){
   cout << s[i] << " ";
  }
  cout << "\n";
 }
 
return 0;
}
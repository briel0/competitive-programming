#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 
 for(int i = 0; i < t; i++){
  string s, r =  " ";
  cin >> s;
  for(int a = 0; a < s.length(); a += 2){
   r += s[a];
  }
  r += s[s.length() - 1];
  cout << r;
 }
 
return 0;
}
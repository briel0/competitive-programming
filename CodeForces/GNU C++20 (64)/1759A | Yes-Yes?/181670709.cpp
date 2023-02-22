#include <iostream>
#include <string>
using namespace std;
 
int main(){
 
 string s = "Yes";
 for(int i = 0; i < 55; i++){
  s += "Yes";
 }
 
 int t;
 cin >> t;
 for(int i = 0; i < t; i++){
  string a;
  cin >> a;
  if(s.find(a) != string::npos){
   cout << "YES" << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 }
 
 
return 0;
}
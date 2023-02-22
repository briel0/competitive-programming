#include <iostream>
#include <string>
using namespace std;
 
int main(){
 int t;
 cin >> t;
 
 for(int i = 0; i < t; i++){
  bool c = true;
  string s;
  cin >> s;
  if(s.length() == 1){
   if(s != "Y" && s != "e" && s != "s"){
    c = false;
   }
  }  
  for(int a = 0; a < (s.length() - 1); a++){
   if(s.substr(a, 1) == "Y" && s.substr(a+1, 1) != "e"){
    c = false;
   }
   else if(s.substr(a, 1) == "e" && s.substr(a+1, 1) != "s"){
    c = false;
   }
   else if(s.substr(a, 1) == "s" && s.substr(a+1, 1) != "Y"){
    c = false;
   }
   else if(s.substr(a, 1) != "Y" && s.substr(a, 1) != "e" && s.substr(a, 1) != "s"){
    c = false;
   }
  }
  if(c == true){
   cout << "YES" << "\n";
  }
  else{
   cout << "NO" << "\n";
  }
 
 }
}
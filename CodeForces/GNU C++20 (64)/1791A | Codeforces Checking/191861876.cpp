#include <iostream>
using namespace std;
 
int main(){
 
 int t; cin >> t;
 char y[] = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
 while(t--){
  char s; cin >> s;
  bool c = true;
  for(int i = 0; i < 7; i++){
   if(s == y[i]){
    c = false;
    break;
   }
  }
  if(c){
   cout << "NO" << "\n";
  }
  else{
   cout << "YES" << "\n";
  }
 }
}
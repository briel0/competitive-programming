#include <iostream>
#include <string>
using namespace std;
 
int main(){
 string s;
 cin >> s;
 long long  x = 0, y = 0;
 
 while(x < s.length()){
  string sa = s.substr(x, 1);
  if(sa == "4" || sa == "7"){
   y+=1;
  }
  x+=1;
 }
 
 if(y == 4 || y == 7){
  cout << "YES";
 }
 else{
  cout << "NO";
 }
 
 
return 0;
}
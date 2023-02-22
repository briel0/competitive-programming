#include <iostream>
using namespace std;
 
int sm(int n){
 int m = 0;
 while(n != 0){
  m += n % 10;
  n = n / 10;
 }
 return m;
}
 
int main(){
 
 int t;
 cin >> t;
 while(t--){
  string s;
  cin >> s;
  string a = "", b = "";
  int r = -1, w = 1;
  for(int i = 0; i < s.length(); i++){
   int e = s[i] - '0';
   if(e % 2 == 0){
    a += to_string(e/2);
    b += to_string(e/2);
   }
   else{
    a += to_string((e+r)/2);
    b += to_string((e+w)/2);
    swap(r, w);
   } 
  }
  int y = stoi(a);
  int f = stoi(b);
  //cout << y << " " << e << "\n";
  
  cout << y << " " << f << "\n";
 }
 
return 0;
}
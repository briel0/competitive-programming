#include <iostream>
using namespace std;
 
int main(){
 int n, c;
 string s;
 
 cin >> n >> s;
 
 for(int i = 0; i < (n - 1); i++){
  if(s.substr(i, 1) == s.substr(i + 1, 1))
   c++;
 }
 
 cout << c;
 
return 0;
}
#include <iostream>
#include <map>
using namespace std;
 
int main(){
 
 int n;
 cin >> n;
 map <string, int> un;
 
 while(n--){
  string s;
  cin >> s;
  if(un.count(s) == 0){
   un[s] = 1;
   cout << "OK" << "\n";;
  }
  else{
   cout << s << un[s] << "\n";
   un[s]++;
  }
 }
 
return 0;
}
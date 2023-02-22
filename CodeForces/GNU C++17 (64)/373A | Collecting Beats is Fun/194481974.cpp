#include <iostream>
using namespace std;
 
int main(){
 
 int k, s[10] = {};
 cin >> k;
 for(int i = 0; i < 16; i++){
  char e;
  cin >> e;
  if(e != '.'){
   s[e - '0']++;
  }
 }
 bool g = true;
 for(int i = 1; i < 10; i++){
  if(s[i] > k*2){
   g = false;
   break;
  }
 }
 if(g){
  cout << "YES";
 }
 else{
  cout << "NO";
 }
 
return 0;
}
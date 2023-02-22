#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 
 while(t--){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
   cin >> a[i];
  }
  int r = -1;
  for(int i = 1; i < n; i++){
   int y = 0, u = 0;
   if(a[0] == 2){
    y++;
   }
   if(a[i] == 2){
    u++;
   }
   for(int b = 1; b <= i; b++){
    if(a[b] == 2){
     y++;
    }
   }
   for(int b = i; b < n; b++){
    if(a[b] == 2){
     u++;
    }
   }
   if(y == u){
    r = i;
    break;
   }
  }
  cout << r << "\n";
 }
 
 
 return 0;
}
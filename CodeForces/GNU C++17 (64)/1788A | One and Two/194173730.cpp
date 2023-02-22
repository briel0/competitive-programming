#include <iostream>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 
 while(t--){
  int n;
  cin >> n;
  int a[n] = {};
  for(int i = 0; i < n; i++){
   int p;
   cin >> p;
   if(p == 2){
    if(i == 0){
     a[i]++;
    }
    else{
     a[i] = a[i-1] + 1;
    }
   }
   else{
    if(i != 0){
     a[i] = a[i-1];
    }
   }
  }
  int r = -1;
  for(int i = 0; i < n; i++){
   //cout << a[i] << " " << a[n-1] - a[i] << "\n";
   if(a[i] == (a[n-1] - a[i])){
    r = i+1;
    break;
   }
  }
  cout << r << "\n";
 }
 
 
 return 0;
}
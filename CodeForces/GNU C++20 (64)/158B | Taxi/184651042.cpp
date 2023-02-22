#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int t;
 cin >> t;
 int n[t];
 
 for(int i = 0; i < t; i++){
  int p;
  cin >> p;
  n[i] = p;
 }
 
 sort(n, n+t);
 
 int i = t - 1;
 int k = 0;
 
 while(i != k){
  if(n[k] + n[i] <= 4){
   n[i] += n[k];
   n[k] = 0;
   k++;
  }
  else{
   i--;
  }
 }
 
 int c = 0;
 for(int i = 0; i < t; i++){
  if(n[i] != 0) c++;
 }
 
 cout << c;
  
return 0;
}
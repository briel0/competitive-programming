#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
 int s, x;
 cin >> s >> x;
 string y;
 cin >> y;
 while(x--){
  for(int i = 1; i < s; i++){
   if(y[i-1] == 'B' && y[i] == 'G'){
    swap(y[i-1], y[i]);
    i++;
   }
  }
 }
 cout << y << "\n";
 
return 0;
}
#include <iostream>
using namespace std;
 
int main(){
 
 long long n, c = 0;
 cin >> n;
 
 if(n % 2 != 0){
  c = (n/2)-n;
 }
 else{
  c = (n/2);
 }
 
 cout << c;
 
}
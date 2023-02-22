#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int ent, nums[3] = {};
cin >> ent;
 
for(int i = 0; i < ent; i++){
 cin >> nums[0] >> nums[1] >> nums[2];
 sort(nums, nums + 3);
 if(nums[0] + nums[1] == nums[2]){
  cout << "YES" << "\n";
 }
 else{
  cout << "NO" << "\n";
 }
}
 
 
return 0;
}
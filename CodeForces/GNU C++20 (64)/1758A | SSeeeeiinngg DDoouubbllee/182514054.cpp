#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    
    while(t--){
        string s1, s2 = "", s3 = "", s4 = "", s5 = "";
        cin >> s1;
        s2 = s2 + s1;
        s3 = s1 + s2;
        sort(s3.begin(), s3.end());
        
        for(int i = 0; i < s3.length(); i++){
            if(i % 2 == 0){
                s4 = s4 + s3[i];
            }
            else{
                s5 = s5 + s3[i];
            }
        }
        reverse(s5.begin(), s5.end());
        cout << s4 << s5 << "\n";
    
    }
 
return 0;
}
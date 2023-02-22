#include<iostream>
using namespace std;
 
int main()
{
    int n[3];
    
    for(int i = 0; i < 3; i++){
        cin >> n[i];
    }
    
    int r = max(max(max((n[0] + n[1])*n[2], n[0]*(n[1]+n[2])), n[0]*n[1]*n[2]), n[0]+n[1]+n[2]);
    
    cout << r;
    return 0;
}
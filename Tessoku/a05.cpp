#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, k;
    cin >>n >>k;
    int count = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j+n>=k&&i+j<k){
                count++;
                // cout <<i <<" " <<j <<" " <<k-i-j <<endl;
            }
        }
    }
    cout <<count <<endl;
}
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, x;
    cin >>n >>x;
    vector<int> a(n), b(n);
    for(int i=0; i<n-1; i++){
        cin >>b.at(i);
    }
    int max = 101;
    for(int i=100; i>=0; i--){
        a = b;
        a.at(n-1) = i;
        sort(a.begin(), a.end());
        // for(int j=0; j<3; j++){
        //     cout <<a.at(j) <<" ";
        // }
        int sum = 0;
        for(int j=1; j<n-1; j++){
            sum+=a.at(j);
            // cout <<sum <<endl;
        }
        if(sum>=x){
            max = i;
        }
        // cout <<endl;
    }
    
    if(max == 101) cout <<-1 <<endl;
    else cout <<max <<endl;
}
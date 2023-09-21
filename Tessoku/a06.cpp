#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,q;
    cin >>n >>q;
    vector<int> a(n), l(q), r(q);
    vector<int> sum(n+1,0);
    for(int i=0; i<n; i++){
        cin >>a.at(i);
        sum.at(i+1) = sum.at(i) + a.at(i);
    }
    for(int i=0; i<q; i++){
        int l, r;
        cin >>l >>r;
        cout <<sum.at(r) - sum.at(l-1) <<endl;
    }
}
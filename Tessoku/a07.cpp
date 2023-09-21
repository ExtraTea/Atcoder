#include <bits/stdc++.h>
using namespace std;
int main(void){
    int d, n;
    cin >>d >>n;
    vector<int> count(d,0);
    for(int i=0; i<n; i++){
        int l, r;
        cin >>l >>r;
        for(int i = l-1; i<r; i++){
            count.at(i)++;
        }
    }
    for(int i=0; i<d; i++){
        cout <<count.at(i) <<endl;
    }

}
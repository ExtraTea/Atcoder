#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, x;
    cin >>n >>x;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >>a.at(i);
    }
    string count = "No";
    for(int i=0; i<n; i++){
        if(int(a.at(i)) == int(x)) count = "Yes";
        // cout <<a.at(i) <<" " <<x <<endl;
    }
    cout <<count <<endl;
}
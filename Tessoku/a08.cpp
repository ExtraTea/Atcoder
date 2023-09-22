#include <bits/stdc++.h>
using namespace std;
int main(void){
    int h,w;
    cin >>h >>w;
    vector<vector<int>> x(h,vector<int> (w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >>x.at(i).at(j);
        }
    }
    vector<vector<int>> sum(h+1,vector<int> (w+1,0));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            sum.at(i+1).at(j+1) = sum.at(i+1).at(j) + sum.at(i).at(j+1) - sum.at(i).at(j) + x.at(i).at(j);
        } 
    }
    int q;
    cin >>q;
    for(int i=0; i<q; i++){
        int a,b,c,d;
        cin >>a >>b >>c >>d;
        cout <<sum.at(c).at(d) - sum.at(c).at(b-1) - sum.at(a-1).at(d) + sum.at(a-1).at(b-1) <<endl;
    }
}
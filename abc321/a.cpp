#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >>s;
    int len = s.length();
    int f = s.at(0);
    int count = 0;
    for(int i=1; i<len; i++){
        if(s.at(i)<f){
            
            f = s.at(i);
            continue;
        }
        else{
            count = 1;
            break;
        }
        
    }
    if(count == 1) cout <<"No" <<endl;
    else cout <<"Yes" <<endl;
}
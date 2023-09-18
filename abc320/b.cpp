#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int main(void){
    string s;
    cin >>s;
    int num = 1;
    int max=1;
    while(1){
        for(int i=0; i<int(s.length()); i++){
            // if(num+i>=100) break;
            string check_str = s.substr(i,num);
            string reversed_str = check_str;
            reverse(reversed_str.begin(), reversed_str.end());
            
            if(check_str == reversed_str){
                // cout <<check_str <<" " <<reversed_str <<endl;
                // max = check_str.length();
                if(max>check_str.length()) max = max;
                else max = check_str.length();
            }
        }
        
        if(num == int(s.length())){
            break;
        }
        num++;

    }
    cout <<max <<endl;
}
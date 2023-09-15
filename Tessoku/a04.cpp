#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >>n;
    string num = "";
    while(1){
        if(n==1) break;
        else if(n%2==0){
            num.insert(0,"0");
        }
        else{
            num.insert(0,"1");
        }
        n/=2;
    }
    num = num.insert(0,"1");
    while (num.length() < 10) {
        num.insert(0, "0");
    }
    cout <<num <<endl;
    // printf("%010d",num.insert(0,"1"));
}
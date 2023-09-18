#include <bits/stdc++.h>
using namespace std;
int main(void){
    int m;
    cin >>m;
    string s1, s2, s3;
    cin >>s1 >>s2 >>s3;
    int maxp = 3*(m+1);
    int count = -1;
    for(int i=0; i<3*m; i++){
        for(int j=0; j<3*m; j++){
            for(int k=0; k<3*m; k++){
                if(i!=j&&j!=k&&k!=i&&s1.at(i%m)==s2.at(j%m)&&s2.at(j%m)==s3.at(k%m)){
                    int maxijk = max(i,j);
                    maxijk = max(maxijk,k);
                    maxp = min(maxp, maxijk);
                    count = 0;
                }
            }
        }
    }
    if(count == -1) cout <<-1 <<endl;
    else cout <<maxp <<endl;
}
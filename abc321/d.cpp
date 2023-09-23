#include <bits/stdc++.h>
using namespace std;

int count_elements_less_than_or_equal(const int target, const std::vector<int64_t> &vec) {
    auto it = std::upper_bound(vec.begin(), vec.end(), target);
    return it - vec.begin();
}

int main() {
    int64_t n, m, p;
    cin >>n >>m >>p;
    vector<int64_t> a(n), b(m), bsum(m+1,0);
    for(int i=0; i<n; i++){
        cin >>a.at(i);
    }
    for(int i=0; i<m; i++){
        cin >>b.at(i);
    }
    sort(b.begin(), b.end());
    for(int i=0; i<m; i++){
        bsum.at(i+1) = bsum.at(i) + b.at(i);
    }
    
    int64_t sum = 0;
    for(int i=0; i<n; i++){
        int64_t target = a.at(i);
        int64_t index = count_elements_less_than_or_equal(p-target, b);
        sum += target*index;
        sum += bsum.at(index);
        sum += (m-index) * p;
    }
    cout <<sum <<endl;
}
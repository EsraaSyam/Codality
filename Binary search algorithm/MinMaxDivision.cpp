#include<bits/stdc++.h>
int solution(int K, int M, vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    int l = 0 , r = 0;
    for(int i = 0 ; i < n ; i++){
        l = max(l , A[i]);
        r += A[i];
    }
    auto is_good = [&](int mid){
        int sum = 0;
        int kk = K - 1;
        for(int i = 0 ; i < n ; i++){
            sum += A[i];
            if(sum > mid){
                sum  = A[i];
                kk--;
            }
            if(kk < 0) return false;
        }
        return true;
    };
    int res = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(is_good(mid)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;

}
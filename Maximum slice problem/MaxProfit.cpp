#include<bits/stdc++.h>
int solution(vector<int> &A) {
    // Implement your solution here
    if(A.size() == 0) return 0;
    int curr = A[0] , res = 0;
    for(auto & i : A){
        if(i - curr < 0) curr = i; 
        res = max(res , i - curr);
    }
    return res;
}
/*
  solution idea
    1. we need to find the maximum difference between two elements in the array
    2. we can do that by finding the minimum element before the current element
    3. then we can calculate the difference between the current element and the minimum element
*/

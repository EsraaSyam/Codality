#include<bits/stdc++.h>
int solution(vector<int> &A) {
    // Implement your solution here
    if(A.size() == 0) return 0;
    int curr = A[0] , res = A[0];
    for(int i = 1 ; i < A.size() ; i++){
        curr = max(A[i] , curr + A[i]);
        res = max(res , curr);
    }
    return res;
}
/*
solution idea:
    - we can solve this problem using Kadane's algorithm
    - we will keep track of the current sum and the maximum sum
    - we will iterate over the array and update the current sum and the maximum sum
    - the current sum will be the maximum between the current element and the current sum + the current element
    - the maximum sum will be the maximum between the current sum and the maximum sum
    - the maximum sum will be the answer
*/
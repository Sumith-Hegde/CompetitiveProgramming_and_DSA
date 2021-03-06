// next permutation (leetcode)
// Link to the problem - https://leetcode.com/problems/next-permutation/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // if(next_permutation(nums.begin(),nums.end()))
        // {
        //     return;
        // }
        // sort(nums.begin(),nums.end());
        bool found=false;
        int i=0;
        int j=0;
        //from end find the point where increasing order(from end ir=tself) stops
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                found=true;
                break;
            }
        }
        //if not found the point then it is last permutation so reverse the order to get first permutation
        if(!found)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        //else from last find which is larger than the prevously found point and swap them
        //reverse everything next to the point after swap  
        for(j=nums.size()-1;j>i;j--)
        {
            if(nums[j]>nums[i])
            {
                swap(nums[i],nums[j]);
                break;
            }
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};
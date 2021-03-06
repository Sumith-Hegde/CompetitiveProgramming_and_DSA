// longest sub string without repeating character (leetcode)
// Link to the problem - https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int n=s.size();
        int i=0;
        int j=0;
        int len=0;
        int maxLen=1;
        if(n==0) return 0;
         // traverse the string, store index of characters in map if map does not have that char
        //if map has that char , then if index stored in map is less than i(i.e i has surpassed that index) then change index to new index and continue
        //if index is not less than i then move i to previously stored index+1 and update length to length from i to j
        //also update maxLength to maximum(previous max,current length)
        //return max(maxLength,len)
        while(j<n)
        {
            if(m.find(s[j])==m.end())
            {
                cout<<"hi";
                m[s[j]]=j;
                len++;
            }
            else
            {
                if(m[s[j]]<i)
                {
                    m[s[j]]=j;
                    len++;
                }
                else
                {
                    i=m[s[j]]+1;
                    m[s[j]]=j;
                    maxLen=max(maxLen,len);
                    len=j-i+1;
                }
            }
            j++;
        }
        return max(maxLen,len);
    }
};
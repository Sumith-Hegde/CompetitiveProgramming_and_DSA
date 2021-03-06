// Polycarp doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

// Polycarp starts to write out the positive (greater than 0) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…. Output the k-th element of this sequence (the elements are numbered from 1).

// Input
// The first line contains one integer t (1≤t≤100) — the number of test cases. Then t test cases follow.

// Each test case consists of one line containing one integer k (1≤k≤1000).

// Output
// For each test case, output in a separate line one integer x — the k-th element of the sequence that was written out by Polycarp.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // TimeComplexity = O(n)
    // SpaceComplexity = O(n)
    int t=0;
    // vector<int> dislike3;
    map<int,int> dislike3;
    int i=1;
    int j=1;
    while(dislike3.size()!=1000)
    {
        if(i%3==0||i%10==3)
        {
            i++;
        }
        else
        {
            dislike3[j]=i;
            i++;
            j++;
        }
    }
    cin>>t;
    while(t--)
    {
        int k=0;
        cin>>k;
        cout<<dislike3[k]<<endl;
    }
}
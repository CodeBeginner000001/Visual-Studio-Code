/**
You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

Return the minimum number of operations to make all elements of nums divisible by 3.

 

Example 1:

Input: nums = [1,2,3,4]

Output: 3

Explanation:

All array elements can be made divisible by 3 using 3 operations:

Subtract 1 from 1.
Add 1 to 2.
Subtract 1 from 4.
Example 2:

Input: nums = [3,6,9]

Output: 0

 

Constraints:

1 <= nums.length <= 50
1 <= nums[i] <= 50
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }else
        if(arr[i]%3!=0){
            count+=min((arr[i]%3),3-(arr[i]%3));
        }
    }
    cout<<count;
}

// leetcode
/*
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    int count=0;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]==1)
            count++;
        else if(nums[i]%3!=0)
            count+=min((nums[i]%3),3-(nums[i]%3));
    }
    return count;
    }
};
*/
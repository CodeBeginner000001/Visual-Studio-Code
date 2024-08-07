/*
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
 

Constraints:

1 <= nums.length <= 1000
1 <= nums[i] <= 105
*/
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    // time complexity: O(3n ~ n)
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int>answer;
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> leftSum(n,0);
    vector<int> rightSum(n,0);
    for(int i=1;i<n;i++) leftSum[i]=(leftSum[i-1]+nums[i-1]);
    // for(int i=0;i<n;i++) cout<<leftSum[i]<<" ";
    for(int i=n-2;i>=0;i--) rightSum[i]=(rightSum[i+1]+nums[i+1]);
    // for(int i=0;i<n;i++) cout<<rightSum[i]<<" ";
    for(int i=0;i<n;i++)
    {
        answer.push_back(abs(leftSum[i]-rightSum[i]));
    }
    for(int i=0;i<n;i++) cout<<answer[i]<<" ";
}
// leetcode
/*
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) { 
    //Time Complexity: O(3n ~ n)
    int n = nums.size();
    vector<int>answer; // final result
    vector<int> leftSum(n,0);
    vector<int> rightSum(n,0);
    for(int i=1;i<n;i++) leftSum[i]=(leftSum[i-1]+nums[i-1]);
    // for(int i=0;i<n;i++) cout<<leftSum[i]<<" ";
    for(int i=n-2;i>=0;i--) rightSum[i]=(rightSum[i+1]+nums[i+1]);
    // for(int i=0;i<n;i++) cout<<rightSum[i]<<" ";
    for(int i=0;i<n;i++)
    {
        answer.push_back(abs(leftSum[i]-rightSum[i]));
    }
    return answer;
    }
};
*/
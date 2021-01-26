/**

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
The number of elements initialized in nums1 and nums2 are m and n respectively. You may assume that nums1 has a size equal to m + n such that it has enough space to hold additional elements from nums2.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]

Constraints:
    nums1.length == m + n
    nums2.length == n
    0 <= m, n <= 200
    1 <= m + n <= 200
    -109 <= nums1[i], nums2[i] <= 109

 **/

//Memory Usage: 9.1 MB (memory usage beats 87.47% cpp submissions)

class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    while(n>0){
        nums1.pop_back();
        n--;
    }
    for(int num2: nums2){
        nums1.push_back(num2);
    }
    sort(nums1.begin(), nums1.end());
}
};
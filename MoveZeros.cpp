/**
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:
    You must do this in-place without making a copy of the array.
    Minimize the total number of operations.

 **/

//Runtime: 12 ms (23.48% of cpp submissions)
//Memory Usage: 8.8 MB (99.39% of cpp submissions)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0;
        for(auto i=nums.begin(); i<nums.end(); i++){
            if(*i==0){
                nums.erase(i);
                x++;
                i--;
            }
        }
        while(x>0){
            nums.push_back(0);
            x--;
        }
    }
};
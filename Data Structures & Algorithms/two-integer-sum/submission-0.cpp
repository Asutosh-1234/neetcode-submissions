class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        while(st<end){
            if(nums[st]+nums[end] == target){
                break;
            }
            if(nums[st]+nums[end] > target){
                end--;
            }else{
                st++;
            }
        }

        return{st, end};
    }
};

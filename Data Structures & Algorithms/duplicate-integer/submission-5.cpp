class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0){
            return false;
        }
        unordered_map<int, int> countRecord;

        for(int i = 0;i<nums.size();i++){
            if(countRecord.contains(nums[i])) return true;
            else countRecord[nums[i]] = 0;
        }

        return false;
    }
};
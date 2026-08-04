class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            int rem = target - nums[i];
            if(!mp.empty() && mp.find(rem) != mp.end()){
                return {mp[rem], i};
            }else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};

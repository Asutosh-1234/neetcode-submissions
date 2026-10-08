class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans;
        for(int i: nums){
            mp[i]++;
        }
        int freq = 0;
        for(auto it: mp){
            if(freq < it.second){
                ans = it.first;
                freq = it.second;
            }
        }
        return ans;
    }
};
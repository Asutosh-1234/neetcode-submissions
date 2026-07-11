class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        vector<int> ans;

        for(auto const& items : mp){
            if (items.second >= k){
                ans.push_back(items.first);
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int it : nums){
            mp[it]++;
        }

        vector<int> ans;

        for (auto it: mp){
            if(it.second >= k){
                ans.push_back(it.first);
            }
        }

        return ans;

    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        int max_freq = 0;
        for(int it : nums){
            mp[it]++;
            if(max_freq < mp[it]) max_freq = mp[it];
        }

        vector<vector<int>> bucket(nums.size() + 1);;

        for (auto it: mp){
            bucket[it.second].push_back(it.first);
        }
        vector<int> ans;

        for(int i = max_freq; i > 0 && ans.size() < k;i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                if(ans.size() == k) break;
            }
        }

        return ans;

    }
};

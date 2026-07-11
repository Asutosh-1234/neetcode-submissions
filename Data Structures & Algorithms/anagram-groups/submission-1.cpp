class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0) return {};
        unordered_map<string, vector<string>> mp;

        for(int i = 0;i<strs.size();i++){
            string str = strs[i];
            sort(str.begin(), str.end());

            mp[str].push_back(strs[i]);
        }

        vector<vector<string> > v;
        for (auto& it : mp) {
            v.push_back(it.second);
        }

        return v;
    }
};

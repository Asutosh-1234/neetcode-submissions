class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(auto str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            res[temp].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto& pair: res){
            ans.push_back(pair.second);
        }
        return ans;
    }
};

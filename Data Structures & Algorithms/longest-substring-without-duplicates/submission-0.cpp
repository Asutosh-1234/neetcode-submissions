class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int res = 0;
        unordered_set<char> st;
        while(r < s.size()){
            if(st.contains(s[r])){
                st.erase(s[l]);
                l++;
                continue;
            }
            
            st.insert(s[r++]);
            res = max(res, (r - l));
        }
        return res;
    }
};

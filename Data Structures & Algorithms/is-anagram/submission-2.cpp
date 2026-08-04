class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if(n != m) return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i = 0;i<n;i++){
            mp1[s[i]]++;
        }
        for(int i = 0;i<m;i++){
            mp2[t[i]]++;
        }
        n = max(n,m);
        for(int i =0;i<n;i++){
            if(mp1[s[i]] != mp2[s[i]]) return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char, int> str1;
        unordered_map<char, int> str2;
        for(int i = 0;i<s.size();i++){
            str1[s[i]]++;
            str2[t[i]]++;
        }

        for(int i = 0;i<s.size();i++){
            if(!str1.contains(s[i]) || !str2.contains(s[i])) return false;

            if(str1[s[i]] != str2[s[i]]){
                return false;
            }
        }

        return true;
    }
};

class Solution {
public:
    int characterReplacement(string s, int k) {
        // store the frequency of each charecter 
        unordered_map<char, int> count;
        int res = 0;

        int l = 0, maxf = 0;
        // for each char we will count the frequency of that char and store the max freq in the maxf
        for(int r = 0;r<s.size();r++){
            count[s[r]]++;
            maxf = max(maxf, count[s[r]]);
            // manage the window for the substring
            // if the no of elements in the window max freq is greater then k then scrink the window
            while((r-l+1)-maxf > k){
                count[s[l]]--;
                l++;
            }
            // store the maximum between the results
            res = max(res, r-l+1);
        }
        return res;
    }
};

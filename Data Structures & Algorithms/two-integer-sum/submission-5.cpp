class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int l = 0;
        int r = n.size()-1;
        while(l < r){
            int ans = n[l] + n[r];
            if(ans == t) return {l,r};
            
            if(ans > t) r--;
            else l++;
        }
        return {};
    }
};

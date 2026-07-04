class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;
        int n = nums.size();
        vector<int> post(n);
        pre.push_back(1);
        for(int i = 1;i<n;i++){
            pre.push_back(pre[i-1]*nums[i-1]);
        }
        post[n-1] = 1;
        for(int i = n-2;i>=0;i--){
            post[i] = post[i+1]*nums[i+1];
        }
        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(pre[i]*post[i]);
        }
        return ans;
    }
};

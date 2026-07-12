class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it : s){
            if(!st.empty() && it == st.top()){
                st.pop();
            }else{
                st.push(it);
            }
        }
        return !st.empty();
    }
};

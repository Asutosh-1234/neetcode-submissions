class Solution {
public:

    string encode(vector<string>& strs) {
        string encodeString = "";
        for (string& s : strs) {
            encodeString += "#" + s;
        }
        return encodeString;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        if(s == "#"){
            ans.push_back("");
            return ans;
        }
        string temp = "";
        for(char c : s){
            if(c == '#'){
                if(!temp.empty()){
                    ans.push_back(temp);
                }
                temp = "";
            }else{
                temp += c;
            }
        }
        if (!temp.empty()) ans.push_back(temp);
        return ans;
    }
};

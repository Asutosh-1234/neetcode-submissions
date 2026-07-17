class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(int i=0;i<tokens.size();i++){
            string s = tokens[i];
            if (s != "+" && s != "-" && s != "*" && s != "/"){
                stk.push(stoi(tokens[i]));
                continue;
            }
            
            if(!stk.empty()){
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();

                if(tokens[i] == "+" ){
                    stk.push(a+b);
                }else if(tokens[i] == "-" ){
                    stk.push(b-a);
                }else if(tokens[i] == "*" ){
                    stk.push(a*b);
                }else if(tokens[i] == "/" ){
                    stk.push(b/a);
                }
            }
             
        }
        return stk.top();
    }
};

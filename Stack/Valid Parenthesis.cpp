class Solution {
    
public:
    bool parenthesisMatching(char a, char b){
        if((a==')' && b == '(') || (a=='}' && b == '{') || (a==']' && b == '['))
            return true;
        return false;
    }

    bool isValid(string s) {
        stack<int>st;

        for(int i = 0;i<s.length();i++){
            if(s[i] == '(' || s[i]=='{' || s[i] =='[')
                st.push(s[i]);
            else{
                if(st.size()==0)
                    return false;
                else if(parenthesisMatching(s[i],st.top())==false)
                    return false;
                st.pop();
            }
        }
            return st.size()==0;
    }
};
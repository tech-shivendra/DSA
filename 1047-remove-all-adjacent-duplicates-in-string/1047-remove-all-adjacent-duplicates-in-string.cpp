class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(char ch : s) {
            if(!st.empty() && ch == st.top()) {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }

        string res = "";

        while(!st.empty()) {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};
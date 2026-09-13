class Solution {
public:
    string removeDuplicates(string s) {
         stack<char>st;
         for(char ch:s){

            if(!st.empty()&&ch==st.top()){
                st.pop();
            }
            else{
                st.push(ch);
            }
         }
         string res ="";
         stack<char>temp;
           while(!st.empty()){
             temp.push(st.top());
            st.pop();
            }
            while(!temp.empty()){
            res = res + temp.top();
            temp.pop();
            }
         
         return res;
    }
};

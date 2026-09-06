class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum = 0;
        for(int i = 0 ; i<operations.size();i++){
            int res = 0;
            int temp = 0;
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                st.push(2*(st.top()));
            }
            else if(operations[i]=="+"){
                 temp = st.top();
                 st.pop();
                  res = temp + st.top();
                 st.push(temp);
                 st.push(res);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
         while(st.size()!=0){
            sum += st.top();
            st.pop();
         }
         return sum;
    }
};
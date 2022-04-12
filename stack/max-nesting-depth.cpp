//1
class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int res = 0;
        for (int i =0; i<s.size(); i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            res = max(count,res);
        }
        return res;
    }
};

//2

class Solution {
public:
    int maxDepth(string s) {
     int count = 0;
        stack<int>st;
        for(int i= 0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            if(s[i]==')'){
                if(count<st.size()){
                    count = st.size();
                }
                st.pop();
            }
        }
        return count;
    }
};
class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(sk.empty()){
                sk.push(s[i]);
                continue;
            }
            char x=sk.top();
            if(x=='('&&s[i]==')'){
                sk.pop();
            }
            else if(x=='['&&s[i]==']'){
                sk.pop();
            }
            else if(x=='{'&&s[i]=='}'){
                sk.pop();
            }
            else sk.push(s[i]);
        }
        cout<<sk.empty()<<" ";
        if(sk.empty()==true)
            return true;
        else
            return false;
    }
};

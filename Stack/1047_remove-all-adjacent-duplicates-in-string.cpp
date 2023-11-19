class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(int i = 0; i< s.length();i++){
            int n = ans.size();
            if(n != 0 && ans[n - 1] == s[i]){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

class Solution {
public:
    void print(vector<int> ans){
        for(int i = 0; i< ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();
        vector<int> ans(size);
        stack<int> st;
        st.push(-1);

        for(int i = size - 1; i >= 0; i--){
            
            int curr = prices[i];

            while(st.top() > curr)
                st.pop();

            if(st.top() == -1){
                ans[i] = prices[i];
            }else{
                ans[i] = prices[i] - st.top();
            }
            st.push(curr);
        }
        return ans;

    }
};

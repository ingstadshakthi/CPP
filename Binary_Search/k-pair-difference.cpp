class Solution {

public:
    void print(vector<int> &nums){
        int n = nums.size();
        for(int i = 0; i< n; i++){
            cout<<nums[i]<<" "<<endl;
        }
        cout<<endl;
    }
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) return 0;
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i = 0;
        int j = 1;
        while(j < n){
            int diff = abs(nums[i] - nums[j]);
            if(diff == k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }else if(diff > k){
                i++;
            }else{
                j++;
            }
            if(i == j){
                j++;
            }
        }

        return ans.size();
    }
};

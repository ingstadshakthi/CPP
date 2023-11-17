class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int j = 0;
        int ans = 1;
        while(i < nums.size()){
            if(nums[i] > nums[j]){
                ++j;
                nums[j] = nums[i];
                i++;
            }else{
                i++;
            }
        }
        i = 1;
        while(i < nums.size()){
            if(nums[i] > nums[i-1]){
                ans++;
            }else{
                break;
            }
            i++;
        }
        return ans;
    }
};

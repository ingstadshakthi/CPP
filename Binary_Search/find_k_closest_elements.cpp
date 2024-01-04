class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        while(j - i >= k){
            if(abs(arr[i] - x) <= abs(arr[j] - x)){
                j--;
            }else{
                i++;
            }
        }
        for(int k = i;k<=j;k++){
            ans.push_back(arr[k]);
        }
        return ans;
    }
};

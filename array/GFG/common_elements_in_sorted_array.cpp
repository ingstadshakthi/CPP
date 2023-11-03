      vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i = 0; 
            int j = 0;
            int k = 0;
            while( i < n1 && j < n2 && k < n3){
                if(A[i] == B[j] && B[j] == C[k]){
                    if(ans.size()!=0){
                        int ansLength = ans.size();
                        if(ans[ansLength - 1] != A[i])
                            ans.push_back(A[i]);
                    }else{
                        ans.push_back(A[i]);
                    }
                    i++;
                    j++;
                    k++;
                }else if(A[i] < B[j] || A[i] < C[k]){
                    i++;
                }else if(B[j] < A[i] || B[j] < C[k]){
                    j++;
                }else{
                    k++;
                }
            }
            return ans;
        }

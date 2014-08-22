class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int v = 0;
        if(n == 0) return 0;
        for(int i=1;i<n;i++){
            if(A[v] != A[i] || (A[v] == A[i] && A[v-1] != A[i])){
                A[++v] = A[i];
            }
        }
        return v+1;
    }
};

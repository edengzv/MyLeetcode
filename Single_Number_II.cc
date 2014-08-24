class Solution {
public:
    int singleNumber(int A[], int n) {
        int one = 0;
        int two = 0;
        for(int i=0;i<n;i++){
            one = (one ^ A[i]) & ~two;
            two = (two ^ A[i]) & ~one;
        }
        return one;
    }
};

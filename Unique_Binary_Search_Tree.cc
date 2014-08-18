class Solution {
public:
    int numTrees(int n) {
        int tmp[1001] = {1,1,2,5,14};
        if(n <= 4){
            return tmp[n];
        }else{
            for(int k=5;k<=n;k++){
                int u = 0;
                if(k % 2 != 0){
                    u = tmp[k/2]*tmp[k/2];
                }
                for(int i=0;i<=k/2-1;i++){
                    u += 2 * tmp[i] * tmp[k-1-i];
                }
                tmp[k] = u;
            }
            return tmp[n];
        }
    }
};

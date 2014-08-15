class Solution{
  public:
    int singleNumber(int A[],int n){
      int num = A[0];
      for(int i=1;i<n;i++){
          num = num ^ A[i];
      }
      return num;
    }
};


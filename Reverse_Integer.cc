#include<iostream>
#include<climits>
#include<cassert>
#include<cstdio>
using namespace std;
class Solution{
  public :
    int reverse(int x){
        long long rel = 0;
        while(x){
            rel = rel * 10 + x % 10;
            assert(rel < INT_MAX && rel > INT_MIN);
            x /= 10;
        }
        if(x < 0){
            return (int)-rel;
        }else{
            return (int)rel;
        }
    }
};
int main(){
  Solution solution;
  int a = 1223;
  int num = solution.reverse(a);
  cout<<num<<endl;
  a = -12345678;
  cout<<solution.reverse(a)<<endl;
  return 0;
}

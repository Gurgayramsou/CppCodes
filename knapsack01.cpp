#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>t(100,vector<int> (100,-1));

int knapsack(const vector<int>& wt,const vector<int>& val , int W, int n){
    //Base condition
   if(n==0 || W==0)
    return 0;
   //memoiz of recursive call
   if(t[W-1][n-1]!=-1)
      return t[W-1][n-1];
    //return statement based on choice digram
   if(wt[n-1]<=W)
       return t[W-1][n-1] = max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
   else if(wt[n-1]>W)
       return knapsack(wt,val,W,n-1);
}



int main(void){
       cout<<knapsack({1,3,4,5,6},{1,4,5,7,3},9,5)<<endl;
   return 0;
}



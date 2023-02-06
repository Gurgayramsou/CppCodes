#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>t(100,vector<int>(100,-1));

int knapsack(const vector<int>& wt,const vector<int>& val,int W,int n){

//Base condition initialization of table
for(int i=0;i<n+1;i++){
    for(int j=0;j<W+1;j++){
        if(i==0 ||j==0){
            t[i][j] =0;
        }
    }
}
//choice diagram code
 for(int i=1;i<n+1;i++){
    for(int j=1;j<W+1;j++){
        if(wt[i-1]<j){
            t[i][j]= max(val[i-1]+t[i-1][j-wt[i]],t[i-1][j]);
        }
        else{
            t[i][j]= t[i-1][j];
        }
    }
 }
 return t[n][W];
}

int main(){
     cout<<knapsack({1,3,4,5,6},{1,4,5,7,3},9,5)<<endl;
  return 0;
}

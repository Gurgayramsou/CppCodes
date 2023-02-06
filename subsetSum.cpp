#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool subsetSum(int arr[],int S,int n){
    bool t[n+1][S+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<S+1;j++){
            if(i==j || j==0)
                t[i][j]=true;
            else if(i==0 && i!=j)
                t[i][j]=false;
        }
    }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<S+1;j++){
                if(arr[i-1]<=j){
                   t[i][j]= (t[i-1][j-arr[i-1]] || t[i-1][j]);
                }
                else
                    t[i][j]=t[i-1][j];
            }
        }




  return t[n][S];
}

bool subsetSumRec(int arr[],int S, int n){
    //Base conditions
   if(n==0){
    return false;
   }
   if(S==0){
    return true;
   }
   //from choice diagram
   if(arr[n-1]<=S){
    return subsetSumRec(arr,S-arr[n-1],n-1) || subsetSumRec(arr,S,n-1);
   }
   else
    return subsetSumRec(arr,S,n-1);
}


int main(){
int arr[3] ={2,3,4};
cout<<subsetSum(arr,8,3)<<endl;
//cout<<subsetSumRec(arr,8,3);
return 0;
}

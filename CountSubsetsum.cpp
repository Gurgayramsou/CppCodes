#include <iostream>

using namespace std;

int countSubsetSum(int arr[],int S,int n){
    if(S==0)
    return 1;
  if(n==0)
    return 0;
  if(arr[n-1]<=S){
    return countSubsetSum(arr,S-arr[n-1],n-1)+countSubsetSum(arr,S,n-1);
  }else{
     return countSubsetSum(arr,S,n-1);
  }
}


int main(){
int arr[5] = {2,7,8,10,3};
cout<<countSubsetSum(arr,10,5);

return 0;
}

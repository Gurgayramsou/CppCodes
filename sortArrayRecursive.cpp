#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

void Insert(vector<int>& v, int temp){
    if(v.size()==0 || v[v.size()-1]<=temp)
        v.push_back(temp);
    int val = v[v.size()-1];
    v.pop_back();
    Insert(v,temp);
    v.push_back(val);
    return;
}


void Sort(vector<int>& v){
 if(v.size()==1){
      return ;
 }
 int temp = v[v.size()-1];
 v.pop_back();
 Sort(v);
 Insert(v,temp);
 return;
}
void PrintFunc(vector<int>& v){
    v.push_back(28);
   for(auto& i: v){
    cout<<i<<" ";
}
}


int main(){

vector<int> data {4,2,1,8,3};

Sort(data);

for(auto& i: data){
    cout<<i<<" ";
}
PrintFunc(data);

return 0;
}

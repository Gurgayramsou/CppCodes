#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int t[100];

int fibonacci(int n){
    if(n==1||n==2)
        return n;
    if(t[n]!=-1)
        return t[n];
    else
        return t[n]=fibonacci(n-1)+fibonacci(n-2);
}

int main(){
memset(t,-1,sizeof(t));
printf("%d",fibonacci(10));
return 0;
}

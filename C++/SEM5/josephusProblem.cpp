#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k){
    if(n==1)
        return 1;
    else 
        return (jos(n-1,k)+k-1)%n+1;
}

int main(){
    int n,k;
    cin>>n>>k;

    int ans=jos(n,k);
    cout<<ans;
    return 0; 
}
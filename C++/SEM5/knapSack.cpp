#include<bits/stdc++.h>
using namespace std;

int knapSack(int n, int wcap, int val[], int wt[]){
    if(n==0 || wcap==0)
        return 0;
    else{
        int cv=val[n-1];
        int cwt=wt[n-1];
        if(cwt<=wcap){
            int c1=cv+knapSack(n-1,wcap-cwt,val,wt);
            int c2=knapSack(n-1,wcap,val,wt);
            return max(c1,c2);
        }
        else
            return knapSack(n-1,wcap,val,wt);
    }
}

int main(){
    int val[3]={1,2,3};
    int wt[3]={2,5,7};
    int ans=knapSack(3,10,val,wt);
    cout<<ans;
    return 0;
}
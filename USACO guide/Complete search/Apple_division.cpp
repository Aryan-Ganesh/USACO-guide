#include <bits/stdc++.h>
using namespace std;

void solve(long long diff, int n, int index, long long apples[], long long &ans){
    if(index==n){
        ans=min(ans,abs(diff));
        return;
    }
    solve(diff+apples[index],n,index+1,apples, ans);
    solve(diff-apples[index],n,index+1,apples, ans);
}

int main(){

    int N;
    cin>>N;
    long long apples[N];
    for(int i=0; i<N; i++){
        cin>>apples[i];
    }
    long long ans=1e15;
    solve(0,N,0,apples,ans);
    cout<<ans<<endl;
    return 0;
}
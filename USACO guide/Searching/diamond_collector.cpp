#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ifstream cin("diamond.in");
    ofstream cout("diamond.out");
    int N,K;
    cin>>N>>K;
    int diamond[N];
    for(int i=0; i<N; i++){
        cin>>diamond[i];
    }
    int mins=diamond[0];
    int maxs=diamond[0];
    for(int i=0; i<N; i++){
        mins=min(mins,diamond[i]);
        maxs=max(maxs,diamond[i]);
    }
    int answer=0;
    if(maxs-K+1<mins){
        cout<<N<<endl;
        return 0;
    }
    for(int i=mins; i<maxs-K+1; i++){
        int count=0;
        for(int j=0; j<N; j++){
            if(i<=diamond[j] && diamond[j]<=i+K){
                count++;
            }
        }
        answer=max(count,answer);
    }

    cout<<answer<<endl;
    return 0;
}
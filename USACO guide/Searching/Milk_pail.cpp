#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ifstream cin("pails.in");
    ofstream cout("pails.out");

    int X,Y,M;
    cin>>X>>Y>>M;
    int X_=min(X,Y);
    int Y_=max(X,Y);
    int fill=0;
    for(int i=0; i<M/Y_; i++){
        fill=max((((M-(Y_*((M/Y_)-i)))/X_)*X_)+(Y_*((M/Y_)-i)),fill);
    }
    fill=max(fill,(M/X_)*X_);
    cout<<fill<<endl;
    return 0;
}
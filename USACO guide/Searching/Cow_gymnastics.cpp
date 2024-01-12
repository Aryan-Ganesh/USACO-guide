#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ifstream cin("gymnastics.in");
    ofstream cout("gymnastics.out");
    int N,K;
    cin>>N>>K;
    int rank[N][K];
    for(int i=0; i<N; i++){
        for(int j=0; j<K; j++){
            cin>>rank[i][j];
        }
    }
    bool greater;
    bool quit=false;
    int answer=0;
    for(int j=1; j<K; j++){
        for(int k=j+1; k<K+1; k++){
            quit=false;
            for(int i=0; i<N; i++){
                int index_1,index_2;
                for(int l=0; l<K; l++){
                    if(rank[i][l]==j){
                        index_1=l;
                    }else if(rank[i][l]==k){
                        index_2=l;
                    }
                }
                if(i==0){
                    if(index_1>index_2){
                        greater=1;
                    }else{
                        greater=0;
                    }
                }
                if(index_1>index_2 && greater==false){
                    quit=true;
                    break;
                }else if(index_1<index_2 && greater==true){
                    quit=true;
                    break;
                }
            }
            if(quit==false){
                answer++;
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}
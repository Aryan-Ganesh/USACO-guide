#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ifstream cin("cownomics.in");
    ofstream cout("cownomics.out");

    int N,M;
    cin>>N>>M;
    string plain[N];
    string spots[N];
    for(int i=0; i<N; i++){
        cin>>spots[i];
    }
    for(int i=0; i<N; i++){
        cin>>plain[i];
    }
    long long answer=0;
    for(int i=0; i<M-2; i++){
        for(int j=i+1; j<M-1; j++){
            for(int k=j+1; k<M; k++){
                unordered_set<string> gene;
                string temp;
                for(int l=0; l<N; l++){
                    temp="";
                    temp+=spots[l][i];
                    temp+=spots[l][j];
                    temp+=spots[l][k];
                    // cout<<temp<<' ';
                    gene.insert(temp);
                }
                for(int l=0; l<N; l++){
                    temp="";
                    temp+=plain[l][i];
                    temp+=plain[l][j];
                    temp+=plain[l][k];
                    // cout<<temp<<' ';
                    if(gene.count(temp)>0){
                        answer--;
                        break;
                    }
                }
                // cout<<endl;
                answer++;
            }
        }
    }

    cout<<answer<<endl;

    return 0;
}
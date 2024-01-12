#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ifstream cin("cownomics.in");
    ofstream cout("cownomics.out");

    int N,M;
    cin>>N>>M;
    string spot[N];
    string plain[N];
    for(int i=0; i<N; i++){
        cin>>spot[i];
    }
    for(int i=0; i<N; i++){
        cin>>plain[i];
    }
    int answer=0;
    for(int i=0; i<M; i++){
        unordered_map<char,int> dna;
        dna['A']=1;
        dna['C']=1;
        dna['T']=1;
        dna['G']=1;
        for(int j=0; j<N; j++){
            dna[spot[j][i]]=0;
        }
        for(int j=0; j<N; j++){
            if(dna[plain[j][i]]==0){
                answer--;
                break;
            }
        }
        answer++;
    }
    cout<<answer<<endl;
    return 0;
}
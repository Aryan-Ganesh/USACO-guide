#include <bits/stdc++.h>
using namespace std;

struct lie{
    char direction;
    int num;
};

bool comp(lie a1, lie a2){
    if(a1.num<a2.num){
        return true;
    }
    return false;
}

int main(){

    int N;
    cin>>N;
    lie state[N];
    for(int i=0; i<N; i++){
        cin>>state[i].direction>>state[i].num;
    }
    sort(state,state+N,comp);
    int min=1001;
    for(int i=0; i<N; i++){
        int count=0;
        for(int j=0; j<N; j++){
            if(state[j].direction=='L'){
                if(state[i].num>state[j].num){
                    count++;
                }
            }else{
                if(state[i].num<state[j].num){
                    count++;
                }
            }
        }
        if(count<min){
            min=count;
        }
    }
    cout<<min;

    return 0;
}
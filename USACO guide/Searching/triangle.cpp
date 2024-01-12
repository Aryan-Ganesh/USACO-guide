#include <bits/stdc++.h>
using namespace std;

bool comp(int a1[],int a2[]){
    if(a1[0]<a2[0]){
        return true;
    }
    return false;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ifstream cin("triangles.in");
    ofstream cout("triangles.out");

    int N;
    cin>>N;
    int coordinates[N][2];
    for(int i=0; i<N; i++){
        cin>>coordinates[i][0]>>coordinates[i][1];
    }
    int area=0;
    for(int i=0; i<N; i++){
        int width=0;
        int height=0;
        for(int j=0; j<N; j++){
            if(coordinates[i][1]==coordinates[j][1]){
                width=max(width,abs(coordinates[j][0]-coordinates[i][0]));
            }
            if(coordinates[i][0]==coordinates[j][0]){
                height=max(height,abs(coordinates[j][1]-coordinates[i][1]));
            }
        }
        area=max(area,width*height);
    }
    cout<<area<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<string> glossary;

int fact(int N){
    int sum=1;
    for(int i=1; i<N+1; i++){
        sum*=i;
    }
    return sum;
}

void words(string word, string temp, int n, unordered_map<string,bool> &book){
    if(temp.size()==n){
        if(book[temp]!=true){
            book[temp]=true;
            glossary.push_back(temp);
            // cout<<temp<<endl;
            return;
        }else{
            return;
        }
        
    }
    for(int i=0; i<word.size(); i++){
        string temp_copy=temp;
        temp_copy+=word[i];
        string word_copy=word;
        word_copy.erase(i,1);
        words(word_copy,temp_copy, n,book);
    }
}

int main(){

    string word;
    cin>>word;
    unordered_map <string,bool> dictionary;
    // cout<<endl;
    unordered_map <char,int> comb;
    for(int i=0; i<word.size(); i++){
        comb[word[i]]+=1;
    }
    int answer=fact(word.size());
    for(auto a: comb){
        answer=answer/fact(a.second);
    }
    cout<<answer<<endl;
    words(word,"", word.size(),dictionary);
    
    sort(glossary.begin(),glossary.end());

    for(int i=0; i<glossary.size(); i++){
        cout<<glossary[i]<<endl;
    }

    return 0;
}
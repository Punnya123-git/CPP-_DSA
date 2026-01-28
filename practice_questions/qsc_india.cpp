#include<iostream>
#include<climits>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

unordered_set<char> vowel = {'a' , 'e' , 'i' , 'o' , 'u'};

bool isvowel(char c){
    // return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    // return vowel.find(c) != vowel.end();
    return vowel.count(c);
}

int getdist(char c){
    int dist = INT_MAX;
    for(auto s : vowel){
        dist = min(dist , abs(c - s));
    }
    return dist;
}


int main() {

    cout<<"Enter a string\n";
    string word;
    cin>>word;

    //s1
    int v=0,c=0;
    for(char  ch : word){
        if(isvowel(ch)){
            v++;
        }else{
            c++;
        }
    }

    if(v>=c){
        return (v-c)/2;
    }

    //if cons r  greater
    vector<int> dist(26 , -1);

    for(char ch : word){
        if(isvowel(ch)) continue;
        int idx = ch - 'a';
        int curr_dist = getdist(ch);
        dist[idx] = curr_dist;
    }
 
    sort(dist.begin() , dist.end());

    int ans = 0;
    int cnt = 0 ;
    for(int i=0;i<26;i++){
        if(dist[i] == -1) continue;
        ans += dist[i];
        cnt++;
        if(cnt == (c-v)/2) break;
    }

    cout<<"Minimum operations : "<<ans<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

long long get(string s){
    int cnta=0,cntb=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a'){
            cnta++;
        }
        if(s[i] == 'b'){
            cntb++;
        }
    }

    return s.size() - 2*min(cnta,cntb);
    
}
int main(){
    //vector<int>nums{-2,0,5,-2,4};
    string s = "aaabb";
    int n = 110;
    long long solve = get(s);
    
    
    cout<<solve<<endl;
}
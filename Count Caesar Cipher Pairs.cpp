#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    string normalize(string& s) {
        if(s.empty()) return s;
        
        int shift = s[0] - 'a';
        string result = "";
        
        for(char ch : s) {
            result += ((ch - 'a' - shift + 26) % 26) + 'a';
        }
        
        return result;
    }
    // logic is to normalize all strings to strings with starting letter a 
    long long countPairs(vector<string>& words) {
        unordered_map<string, long long> groups;
        
        for(string& word : words) {
            string canonical = normalize(word);
            groups[canonical]++;
        }
        
        long long ans = 0;
        for(auto& p : groups) {
            long long count = p.second;
            ans += count * (count - 1) / 2;
        }
        // use pnc formulas to calculate ans within O(n)
        return ans;
    }
};

// current logic takes time 
// bool f(vector<string>&words, int first,int second){
//     if(words[first]==words[second]) return true;
//     int m=words[first].size();
//     string temp="";
//     string check=words[first];
//     for(int i=0;i<26;i++){
//         //string temp="";
        
//         for(int j=0;j<m;j++){
//             char ch=check[j];
//             if(ch == 'z'){
//                 temp+='a';
//             }else if(ch == 'a'){
//                 temp+='b';
//             }
//             else{
//                 temp+=ch+1;
//             } 
//         }
        
//         if(temp==words[second]) return true;
//         check=temp;
//         temp.erase();
        
//     }
//     check=words[second];
//     for(int i=0;i<26;i++){
        
//         for(int j=0;j<m;j++){
//             char ch=check[j];
//             if(ch == 'z'){
//                 temp+='a';
//             }else if(ch == 'a'){
//                 temp+='b';
//             }
//             else{
//                 temp+=ch+1;
//             } 
//         }
        
//         if(temp==words[first]) return true;
//         check=temp;
//         temp.erase();
        
//     }

//     return false;
// }
// int main(){
//     // int t;
//     // cin>>t;
//     // while(t--){
        
//     // }
//     vector<string>words={"md","fw","zq","bs"};
//     int n=words.size();
//     vector<int>box(n,-1);
    
//     for(int i=0;i<words.size();i++){
//         bool flag=false;
        
//         for(int j=i+1;j<words.size();j++){
//             if(box[i]== -1 && box[j]==-1){
//                 if(f(words,i,j)){
//                     box[j]=i;
//                     flag=true;
                    
//                 }
//             }

//         }
//         if(flag){
//             box[i]=i;
//         }
//     }

//     ll ans=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(box[i]!=-1 && box[j]!=-1 && box[i]==box[j]){
//                 ans++;
//             }
//         }
//         //cout<<box[i]<<endl;
        
//     }

//     cout<<ans<<endl;
// }
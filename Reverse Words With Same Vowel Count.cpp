#include<bits/stdc++.h>
using namespace std;



// correct code
class Solution {
public:
    int countVowels(string word){
        int count = 0;
        for(char c : word){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count++;
            }
        }
        return count;
    }
    
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        
        while(ss >> word){
            words.push_back(word);
        }
        
        int targetCount = countVowels(words[0]);
        string result = words[0];
        
        for(int i = 1; i < words.size(); i++){
            result += " ";
            if(countVowels(words[i]) == targetCount){
                reverse(words[i].begin(), words[i].end());
            }
            result += words[i];
        }
        
        return result;
    }
};

/*


Errors i did in contest 


in this code (ans = check(s,left,i,count);) will create another memory and 
s[j]=ans[j]; where ans is starting from 0 and s is starting from left so there will be an error 


class Solution {
public:
    bool checkVowel(string s, int i){
    if(s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        return true;
    } 
    return false;
}
    
    string check(string s, int left, int i,int count){
    //cout<<"heloe"<<endl;
    int cnt=0;
    for(int j=left;j<i;j++){
        if(checkVowel(s,j)){
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    string ans="";
    if(count == cnt){
        for(int j=i-1;j>=left;j--){
            ans+=s[j];
        }
    }
    else{
        for(int j=left;j<i;j++){
            ans+=s[j];
        }
    }
    //cout<<ans<<endl;
    return ans;
}
    
    string reverseWords(string s) {
        //string s="book is nice";

        int count=0;
        int first=0;
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                flag=false;
                first=i;
                break;
            }
            if(checkVowel(s,i)){
                count++;
            }
            
        }
        if(flag){
            return s;
        }
        string ans="";
        for(int i=0;i<first;i++){
            ans+=s[i];
        }
        //vector<string>words;
        //words.push_back(ans);
        int left=first+1;
        //cout<<"hi"<<endl;
        for(int i=first+1;i<s.size();i++){
            if(s[i] == ' '){
                ans = check(s,left,i,count);
                for(int j=left;j<i;j++){
                    s[j]=ans[j];
                }
                left=i+1;
                //words.push_back(ans);
            }
        }
        ans=check(s,left,s.size(),count);
        for(int j=left;j<s.size();j++){
            s[j]=ans[j];
        }
        // words.push_back(ans);
        // ans=words[0];
        // for(int i=1;i<words.size();i++){
        //     ans = ans+ " "+ words[i]; 
        // }
    
        //cout<<ans<<endl;
        return ans;
    }
};

*/

/*
in this code strings are assumed to be imutable but i got memory limit exceded because (ans = ans + " " + words[i];  // Creates new string objects repeatedly!)


bool checkVowel(string s, int i){
    if(s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        return true;
    } 
    return false;
}
string check(string s, int left, int i,int count){
    //cout<<"heloe"<<endl;
    int cnt=0;
    for(int j=left;j<i;j++){
        if(checkVowel(s,j)){
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    string ans="";
    if(count == cnt){
        for(int j=i-1;j>=left;j--){
            ans+=s[j];
        }
    }
    else{
        for(int j=left;j<i;j++){
            ans+=s[j];
        }
    }
    //cout<<ans<<endl;
    return ans;
}
int main(){
    //string s="cat and mice";
    string s="book is nice";

    int count=0;
    int first=0;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            flag=false;
            first=i;
            break;
        }
        if(checkVowel(s,i)){
            count++;
        }
        
    }
    if(flag){
        cout<<s<<endl;
        return 0;
    }
    string ans="";
    for(int i=0;i<first;i++){
        ans+=s[i];
        
    }
    vector<string>words;
    words.push_back(ans);
    int left=first+1;
    //cout<<"hi"<<endl;
    for(int i=first+1;i<s.size();i++){
        if(s[i] == ' '){
            ans = check(s,left,i,count);
            left=i+1;
            words.push_back(ans);
        }
    }
    ans=check(s,left,s.size(),count);
    words.push_back(ans);
    ans=words[0];
    for(int i=1;i<words.size();i++){
        ans = ans+ " "+ words[i]; 
    }
    

    cout<<ans<<endl;
}

*/

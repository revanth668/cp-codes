#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(min > a[i]){
                min=a[i];
            }
            if(max < a[i]){
                max= a[i];
            }
        }

        int x;
        cin>>x;
        // bool problem=true;
        // //sort(a.begin(),a.end());
        // while(a.size() >2){
        //     int last = a.back();
        //     a.pop_back();
        //     int second_last = a.back();
        //     a.pop_back();

        //     if(abs(last - second_last) < 2 ){
        //         problem = false;
        //         break;
        //     }
        //     //int temp = max(last,second_last);
        //     a.push_back(max(last ,second_last) );

        // }

        if( x>= min && x<= max){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
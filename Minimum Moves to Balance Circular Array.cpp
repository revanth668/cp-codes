#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>balance{-3,2};
    int sum=0;
    int n=balance.size();
    int neg=0;
    int index=0;
    for(int i=0;i<n;i++){
        if(balance[i]>=0){
            sum+=balance[i];
        }
        else{
            neg=balance[i];
            index=i;
        }
    }
    
    if(abs(neg) > sum){
        cout<<-1<<endl;
        return 0;
    }

    for(int i=0;i<n;i++){
        balance.push_back(balance[i]);
    }
    for(int i=0;i<n;i++){
        balance.push_back(balance[i]);
    }

    index += n;
    int amount=0;
    int moves=0;
    for(int dist=1;dist<n;dist++){
        amount+=balance[index+dist]+balance[index-dist];
        moves+=(balance[index+dist]+balance[index-dist])*(dist);
        //cout<<amount<<" "<<moves<<endl;
        if(amount == abs(neg) ){
            break;
        }
        else if(amount > abs(neg)){
            moves-= (amount - abs(neg))*dist;
            break;
        }
    }
    cout<<moves<<endl;

}
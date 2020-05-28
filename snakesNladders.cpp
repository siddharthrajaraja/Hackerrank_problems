#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define REP(i,a,b) for(ll i=a;i<b;i++)
void returnDic(map<ll,ll>&dic,ll n){
    while(n--){
        int u,v;cin>>u>>v;
        dic[u]=v;
    }
}

int performBFS(map<ll,ll>snakes,map<ll,ll>ladders){
    deque<pair<ll,ll>>Q;
    vector<ll>visited(101,0);
    Q.push_back({1,0});

    while(!Q.empty()){
        ll currentPosition=Q.front().first;
        ll currentThrow=Q.front().second;
        if(currentPosition==100){
            return currentThrow;
        }
       //cout<<"Position : ( "<<currentPosition<<" , "<<currentThrow<<" ) \n";
        Q.pop_front();
        // Look for every possible dice move from
        ll i;
        REP(i,1,7){
            if(currentPosition+i<=100){
                if(visited[currentPosition+i]!=1){
                    visited[currentPosition+i]=1;
                    if(snakes.find(currentPosition+i)==snakes.end()){
                        if(ladders.find(currentPosition+i)!=ladders.end()){
                            if(visited[ladders[currentPosition+i]]==0){
                                
                                Q.push_back({ladders[currentPosition+i],currentThrow+1});
                                visited[ ladders[currentPosition+i]]=1;
                        
                            }
                        }
                        else
                        {
                            Q.push_back({currentPosition+i,currentThrow+1});
                        }
                        
                    }
                    else{

                        visited[snakes[currentPosition+i]]=1;
                        Q.push_back({snakes[currentPosition+i],currentThrow+1});
                        
                    }
                }
            }
        }

    }

    return -1;

}

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll ladders;cin>>ladders;
        map<ll,ll>ladderDic; returnDic(ladderDic,ladders);
        ll snakes;cin>>snakes;
        map<ll,ll>snakeDic;returnDic(snakeDic,snakes);
        //cout<<"Minimum number of Dice Throws: "<< performBFS(snakeDic,ladderDic);
        cout<<performBFS(snakeDic,ladderDic)<<"\n";
    }

    return 0;
}

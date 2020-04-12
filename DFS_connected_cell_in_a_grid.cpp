#include<bits/stdc++.h>
#define pushb push_back
#define popf pop_front
#define MAX 20
using namespace std;
int matrix[MAX][MAX]={0};
int visited[MAX][MAX]={0};


void input(int r,int c){
    for(int i=1;i<=r+1;i++){
        for(int j=1;j<=c+1;j++){
            int ele;cin>>ele;
            matrix[i][j]=ele;
        }
    }
}


void printDeque(deque<pair<int,int> >arr){
    for(deque<pair<int,int> >::iterator i=arr.begin();i!=arr.end();i++){
        cout<<"("<<(*i).first<<","<<(*i).second<<")"<<",\t";
    }
    cout<<endl;
}



void getMaxConnection(int r,int c){
    int max=-1;
    for(int i=0;i<=r+1;i++){
        for(int j=0;j<=c+1;j++){
            int count=0;

            if(matrix[i][j]==1 && visited[i][j]==0){
                deque<pair<int,int> >pairs;
                
                pairs.pushb({i,j});
                visited[i][j]=1;
                        
                while(!pairs.empty()){
                        int x=pairs.front().first;
                        int y=pairs.front().second;

                        cout<<"\nDEQUEUE OBTAINED :"<<endl;
                        printDeque(pairs);

                        count++;
                        pairs.popf();

                        if(matrix[x][y+1]==1 && visited[x][y+1]==0){
                                
                                pairs.pushb({x,y+1});
                                visited[x][y+1]=1;
                        
                        }
                        if(matrix[x+1][y]==1 && visited[x+1][y]==0){
                                pairs.pushb({x+1,y});
                                visited[x+1][y]=1;
                        
                        }
                        if(matrix[x+1][y+1]==1 && visited[x+1][y+1]==0){
                                visited[x+1][y+1]=1;
                                pairs.pushb({x+1,y+1});
                        }

                        if(matrix[x+1][y-1]==1 && visited[x+1][y-1]==0){
                                visited[x+1][y-1]=1;
                                pairs.pushb({x+1,y-1});
                        }

                        if(matrix[x][y-1]==1 && visited[x][y-1]==0){
                                visited[x][y-1]=1;
                                pairs.pushb({x,y-1});
                        }

                        if(matrix[x-1][y]==1 && visited[x-1][y]==0){
                                visited[x-1][y]=1;
                                pairs.pushb({x-1,y});
                        }

                        if(matrix[x-1][y-1]==1 && visited[x-1][y-1]==0){
                                visited[x-1][y-1]=1;
                                pairs.pushb({x-1,y-1});
                        }

                        

                        

                        
                        



                }
                
             }
             if(max<count)max=count;




        }
    }
    cout<<max<<endl;
}



int main(){
    int r,c;cin>>r>>c;
    input(r,c);
    getMaxConnection(r,c);


    return 0;
}

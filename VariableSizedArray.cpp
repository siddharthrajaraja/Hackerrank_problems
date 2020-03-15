#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int>);


int main(){
    long long n,q; std::cin>>n>>q;
    std::vector<vector<int> >parent;

    while (n!=0)
    {   std::vector<int>child;
        long long size; std::cin>>size;
        
        for(int i=0;i<size;i++){
            int ele;
            std::cin>>ele;
            child.push_back(ele);
        }

       // printVector(child);
        parent.push_back(child);
        n--;
    }

    while(q!=0){
        long long r,c;std::cin>>r>>c;
        std::cout<<parent[r][c]<<endl;
        q--;
    }
    


    return 0;
}

void printVector(vector<int>v){    
    std::cout<<"\nvector is : ";
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<"\t";
    }

}


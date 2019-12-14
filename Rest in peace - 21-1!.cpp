#include<stdio.h>
int A[100002]={0};

int get(int n){
	while(n!=0){
		int ele;scanf("%d",&ele);
		A[ele]++;
		
		n--;
	}
}

int main(){
	int n ; scanf("%d",&n);
	get(n);
	int k;scanf("%d",&k);
	for(int i=0;i<100001;i++){
		if(A[i]==k)
			{
			printf("%d",i);
				break;	
			}
	}	
	
	return 0;
	
}

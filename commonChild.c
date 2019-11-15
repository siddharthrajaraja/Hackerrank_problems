#include<stdio.h>
#include<string.h>
int tab[5002][5002]={0};

void printtab(int n){
	int i;
	for(i=0;i<n;i++){
		for(int j=0;j<n;++j){
			printf("%d",tab[i][j]);
		}
		printf("\n");
	}
}

void commonChild(char *s1,char *s2){
	int i=1,j=1;
	int r=strlen(s1),c=strlen(s2);
	
	while(i<=r){
		j=1;
		while (j<=c){
		
		if(s1[i-1]==s2[j-1]){
			tab[i][j]=tab[i-1][j-1]+1;
			
		}
		else{
				tab[i][j]= tab[i][j-1]<tab[i-1][j] ? tab[i-1][j] :tab[i][j-1];
			}
			j++;
		}
		i++;
	//	printtab(r);
	//	printf("\nDone");
	}
	printf("%d",tab[r][c]);
}

int main(){
	char s1[50001],s2[5001];
	gets(s1);
	gets(s2);
	commonChild(s1,s2);
  return 0;		
}

#include <iostream>
#include <math.h>
#define MAXN 10005
using namespace std;

bool isPrime(int n){
	if(n==2||n==3) return true;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return false;
		}
	}
	return true;
}

int main(){
	int rank[MAXN]={0};
	bool isChecked[MAXN]={false};
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int tmp;
		scanf("%d",&tmp);
		rank[tmp]=i+1;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int tmp;
		if(i!=0) printf("\n");
		scanf("%d",&tmp);
		if(isChecked[tmp]){
			printf("%04d: Checked");
		}else if(rank[tmp]==0){
			printf("%04d: Are you kidding?",tmp);
		}else{
			if(rank[tmp]==1) printf("%04d: Mystery Award",tmp);
			else if(isPrime(rank[tmp])) printf("%04d: Minion",tmp);
			else printf("%04d: Chocolate",tmp);
			isChecked[tmp]=true;
		}
	}
	return 0;
}

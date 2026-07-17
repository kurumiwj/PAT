#include <iostream>
using namespace std;

int main(){
	int m,n,a,b,rep;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&rep);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int tmp;
			scanf("%d",&tmp);
			if(j!=0) printf(" ");
			if(tmp<a||tmp>b) printf("%03d",tmp);
			else printf("%03d",rep);
		}
		printf("\n");
	}
	return 0;
}

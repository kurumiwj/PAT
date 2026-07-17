#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n,i=0,j=0,k=0,t=0,max=0;
	scanf("%d",&n);
	int *a = (int *)malloc(sizeof(int)*(n+10));
	memset(a,0,sizeof(a));
	// for(i=0;i<n;i++) printf("%d\n", *(a+i));
	for(i=0;i<n;i++){
		scanf("%d%d",&j,&k);
		a[j]+=k;
		if(a[j]>max){
			max=a[j];
			t=j;
		}
	}
	printf("%d %d",t,max);
	system("pause");
	return 0;
}
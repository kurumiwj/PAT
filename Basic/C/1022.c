#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a,b,d,s,i=0,j;
	int A[32];
	memset(A,0,sizeof(A));
	scanf("%d%d%d",&a,&b,&d);
	s=a+b;
	do{
		A[i]=s%d;
		s/=d;
		i++;
	}while(s>0);
	for(j=i-1;j>=0;j--) printf("%d",A[j]);
	system("pause");
	return 0;
}
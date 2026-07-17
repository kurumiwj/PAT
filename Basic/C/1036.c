#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,col=0,row=0;
	char c;
	scanf("%d %c",&n,&c);
	col = n;
	if(n%2) row = col/2+1;
	else row = col/2;
	for(i=0;i<n;i++) printf("%c", c);
	printf("\n");
	for(j=0;j<row-2;j++){
		for(i=0;i<n;i++) printf("%c", i==0||i==n-1?c:' ');
		printf("\n");
	}
	for(i=0;i<n;i++) printf("%c", c);
	printf("\n");
	system("pause");
	return 0;
}
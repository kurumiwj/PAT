#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int star_sum(int t){
	if(t==1) return 1;
	else return 2*t+star_sum(t-2);
}
int main(){
	int n,t,left;
	char c;
	scanf("%d %c",&n,&c);
	for(t=1;star_sum(t)<=n;t+=2);
	t-=2;
	for(int i=0;i<t/2+1;i++){
		for(int j=0;j<i;j++) printf(" ");
		for(int j=i;j<t-i;j++) printf("%c",c);
		printf("\n");
	}
	for(int i=t/2-1;i>=0;i--){
		for(int j=i-1;j>=0;j--) printf(" ");
		for(int j=t-i-1;j>=i;j--) printf("%c",c);
		printf("\n");
	}
	left=n-star_sum(t);
	printf("%d\n",left);
	system("pause");
	return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,na=0,nb=0,sum;
	scanf("%d",&n);
	int a[n][4];
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
		sum=a[i][0]+a[i][2];
		if(a[i][1]==sum&&a[i][3]==sum||a[i][1]!=sum&&a[i][3]!=sum) continue;
		if(a[i][1]==sum) nb++;	//甲赢，乙喝
		else na++;	//乙赢，甲喝
	}
	printf("%d %d\n",na,nb);
	system("pause");
	return 0;
}
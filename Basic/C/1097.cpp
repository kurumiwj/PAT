#include <iostream>
using namespace std;

int main(){
	int n,k,x,cnt=1;
	scanf("%d%d%d",&n,&k,&x);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++){
		if(i%2){
			for(int j=n;j>cnt;j--)
				a[i][j]=a[i][j-cnt];
			for(int j=1;j<=cnt;j++)
				a[i][j]=x;
			cnt=cnt<k ? cnt+1 : 1;
		}
	}
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<=n;j++){
			sum+=a[j][i];
		}
		if(i!=1) printf(" ");
		printf("%d",sum);
	}
	system("pause");
	return 0;
}

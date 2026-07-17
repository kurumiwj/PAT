#include <iostream>
using namespace std;

int main(){
	int n,sum=0,s=0,tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		s+=tmp;
	}
	sum=s*(n-1)+s*(n-1)*10;
	printf("%d",sum);
	return 0;
}

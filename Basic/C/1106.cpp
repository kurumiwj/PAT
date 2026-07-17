#include <iostream>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[1000]={2,0,1,9};
	for(int i=0;i<n;i++){
		if(i>=4)
			a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4])%10;
		printf("%d",a[i]);
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,a[4];	//千百十个
	scanf("%d",&n);
	if(n==6174) printf("7641 - 1467 = 6174\n");
	while(n!=6174){
		a[0]=n/1000,a[1]=n%1000/100,a[2]=n%100/10,a[3]=n%10;
		if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3]){
			printf("%04d - %04d = %04d\n",n,n,0);
			break;
		}
		sort(a,a+4);
		int max_num=a[3]*1000+a[2]*100+a[1]*10+a[0],min_num=a[0]*1000+a[1]*100+a[2]*10+a[3];
		n=max_num-min_num;
		printf("%04d - %04d = %04d\n",max_num,min_num,n);
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}

int main(){
	int n1,m1,n2,m2,k,start=0,end=0;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	double Min=min(n1*1.0/m1,n2*1.0/m2),Max=max(n1*1.0/m1,n2*1.0/m2);
	for(int i=1;;i++){
		if(i*1.0/k>Min){
			start=i;
			break;
		}
	}
	for(int i=start;;i++){
		if(i*1.0/k>=Max){
			end=i-1;
			break;
		}
	}
	bool flag=true;	//判断是否是第一个最简分数
	for(int i=start;i<=end;i++){
		if(gcd(k,i)==1){
			if(flag){
				flag=false;
			}else{
				printf(" ");
			}
			printf("%d/%d",i,k);
		}
	}
	return 0;
}

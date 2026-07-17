#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,a,b;
	double Max=0,squareSum;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		squareSum=sqrt(a*a+b*b);
		if(squareSum>Max) Max=squareSum;
	}
	printf("%.2lf",Max);
	return 0;
}

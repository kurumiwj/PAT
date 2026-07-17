#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double r1,r2,p1,p2,a,b;
	scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
	a=r1*cos(p1)*r2*cos(p2)-r1*sin(p1)*r2*sin(p2);
	b=r1*sin(p1)*r2*cos(p2)+r2*sin(p2)*r1*cos(p1);
	if(fabs(a)<0.005){
		printf("0.00");
	}else{
		printf("%.2lf",a);
	}
	if(fabs(b)<0.005){
		printf("+0.00i",b);
	}else{
		if(b>0){
			printf("+");
		}
		printf("%.2lfi",b);
	}
	system("pause");
	return 0;
}

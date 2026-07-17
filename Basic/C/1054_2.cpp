#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n,cnt=0;
	char prev[100],now[100];
	double tmp,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		bool flag=false;
		scanf("%s",prev);
		sscanf(prev,"%lf",&tmp);
		sprintf(now,"%.2f",tmp);
		for(int j=0;j<strlen(prev);j++){
			if(prev[j]!=now[j]) flag=true;	//有精确度不一样的数
		}
		if(flag||tmp<-1000||tmp>1000){
			printf("ERROR: %s is not a legal number\n",prev);
			continue;
		}else{
			cnt++;
			sum+=tmp;
		}
	}
	if(cnt==0) printf("The average of 0 numbers is Undefined");
	else if(cnt==1) printf("The average of 1 number is %.2f",sum);
	else printf("The average of %d numbers is %.2f",cnt,sum/cnt);
	return 0;
}

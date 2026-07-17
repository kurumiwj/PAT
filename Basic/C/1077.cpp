#include <iostream>
using namespace std;

int main(){
	int n,m,sum,g2,Max,Min,cnt;
	double g1;
	scanf("%d%d",&n,&m);
	bool delMin=false,delMax=false;
	for(int i=0;i<n;i++){
		if(i!=0) printf("\n");
		sum=0,cnt=0,Max=-1,Min=105;
		scanf("%d",&g2);
		for(int j=0;j<n-1;j++){
			int tmp;
			scanf("%d",&tmp);
			if(tmp<0||tmp>m) continue;
			else{
				if(tmp>Max) Max=tmp;
				if(tmp<Min) Min=tmp;
				sum+=tmp;
				cnt++;
			}
		}
		sum-=(Min+Max);
		cnt-=2;
		g1=sum*1.0/cnt;
		printf("%d",(int)((g1+g2)/2+0.5));
	}
	
	return 0;
}

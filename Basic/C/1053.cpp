#include <iostream>
using namespace std;

int main(){
	int n,d,cnt=0,k,maybeEmpty=0,Empty=0;
	double e,power;
	scanf("%d%lf%d",&n,&e,&d);
	for(int i=0;i<n;i++){
		cnt=0;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%lf",&power);
			if(power<e) cnt++;
		}
		if(cnt>k/2.0&&k<=d) maybeEmpty++;
		else if(cnt>k/2.0&&k>d) Empty++;
	}
	printf("%.1lf%% %.1lf%%",maybeEmpty*100.0/n,Empty*100.0/n);
	system("pause");
	return 0;
}

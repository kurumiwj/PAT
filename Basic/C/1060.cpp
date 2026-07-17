#include <iostream>
#include <algorithm>
#define MAXN 100005
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int dis[MAXN];
	for(int i=0;i<n;i++){
		scanf("%d",&dis[i]);
	}
	sort(dis,dis+n);
	bool flag=false;	//ÅÐ¶ÏÊÇ·ñ´æÔÚ
	for(int i=0;i<n;i++){
		if(dis[i]>n-i){
			flag=true;
			printf("%d",n-i);
			break;
		}
	}
	if(!flag) printf("0");
	return 0;
}

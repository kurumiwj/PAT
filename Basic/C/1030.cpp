#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,max=0,cnt=0;
	long long p;
	scanf("%d%lld",&n,&p);
	vector<long long> a(n);
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		cnt=upper_bound(a.begin()+i,a.end(),a[i]*p)-a.begin()-i;	//找到第一个比i*p大的数
		if(max<cnt) max=cnt;
	}
	printf("%d",max);
	system("pause");
	return 0;
}
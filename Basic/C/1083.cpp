#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first>b.first;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		mp[max(a[i],i)-min(a[i],i)]++;
	}
	vector<pair<int,int>> v(mp.begin(),mp.end());
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		if(v[i].second!=1)
			printf("%d %d\n",v[i].first,v[i].second);
	}
	return 0;
}

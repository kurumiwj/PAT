#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,cnt=0,sum;
	char mp[11]={'1','0','X','9','8','7','6','5','4','3','2'};	//取余后对应的校验码
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};	//权重分配
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		sum=0;
		for(int j=0;j<17;j++) sum=sum+(s[j]-'0')*a[j];
		int z=sum%11;
		if(mp[z]==s[17]) cnt++;
		else cout<<s<<endl;
	}
	if(cnt==n) printf("All passed\n");
	system("pause");
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

string getAppearance(string a,int n){
	string pre=a,str=a;
	if(n==1) return a;
	for(int i=2;i<=n;i++){
		int start=0,cnt=1;
		pre=str;
		str="";
		for(int j=1;j<pre.size();j++){
			if(pre[j]==pre[start]) cnt++;
			else{
				str+=(pre[start]+to_string(cnt));
				start=j;
				cnt=1;
			}
		}
		str+=(pre[start]+to_string(cnt));
	}
	return str;
}

int main(){
	int d,n;
	scanf("%d%d",&d,&n);
	cout<<getAppearance(to_string(d),n)<<endl;
	return 0;
}

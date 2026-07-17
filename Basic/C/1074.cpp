#include <iostream>
#include <string>
using namespace std;

int main(){
	int add=0,tmp_a,tmp_b,tmp,x;
	string n,a,b,sum;
	bool flag=false;
	cin>>n>>a>>b;
	sum=n;
	if(a.length()!=n.length()){
		for(int i=0;i<n.length()-a.length();) a.insert(0,"0");
	}
	if(b.length()!=n.length()){
		for(int i=0;i<n.length()-b.length();) b.insert(0,"0");
	}
	for(int i=n.length()-1;i>=0;i--){
		tmp=a[i]-'0'+b[i]-'0'+add;
		if(n[i]=='0') x=10;
		else x=n[i]-'0';
		sum[i]=tmp%x+'0';
		add=tmp/x;
	}
	if(add==1) sum.insert(0,"1");
	for(int i=0;i<sum.size();i++){
		if(sum[i]!='0'||flag){
			flag=true;
			printf("%c",sum[i]);
		}
	}
	if(!flag) printf("0");
	return 0;
}

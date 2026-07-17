#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string n;
	cin>>n;
	int b,r=0,k=0,a[n.length()]={0};	//r余数
	vector<int> q;	//q[]商
	scanf("%d",&b);
	for(int i=0;i<n.length();i++) a[i]=n[i]-'0';
	while(k<n.length()){
		r=r*10+a[k];
		if(r/b!=0){
			q.push_back(r/b);
			r%=b,k++;
		}else{
			if(k!=0) q.push_back(0);	//第一位不能放0
			r=a[k++];
		}
	}
	if(q.size()==0) printf("0");
	for(int i=0;i<q.size();i++) printf("%d",q[i]);
	printf(" %d",r);
	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct student{
	string id;
	int a;	//试机座位号
	int b;	//考试座位号
};
int main(){
	int n,m;
	scanf("%d",&n);
	student stu[n];
	for(int i=0;i<n;i++) cin>>stu[i].id>>stu[i].a>>stu[i].b;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int k;
		scanf("%d",&k);
		for(int j=0;j<n;j++)
			if(stu[j].a==k) cout<<stu[j].id<<" "<<stu[j].b<<endl;
	}
	system("pause");
	return 0;
}
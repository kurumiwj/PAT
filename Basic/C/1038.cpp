#include <iostream>
#include <cstdio>
using namespace std;

int hashtable[101]={0};
int main(){
	int n,k;
	scanf("%d",&n);
	int stu[n];
	for(int i=0;i<n;i++){
		scanf("%d",&stu[i]);
		hashtable[stu[i]]++;
	}
	scanf("%d",&k);
	int check[k];
	for(int i=0;i<k;i++){
		scanf("%d",&check[i]);
		printf("%d",hashtable[check[i]]);
		if(i!=k-1) printf(" ");
	}
	system("pause");
	return 0;
}
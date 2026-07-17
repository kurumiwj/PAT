#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// void InsertSort(int b[],int i,int j){	//将数组b第i个元素插入到b[i]到b[j-1]中
// 	int tmp=b[j],k;
// 	for(k=j;k>i;k--)
// 		if(tmp>b[k-1]) break;
// 		else b[k]=b[k-1];
// 	b[k]=tmp;
// }
int main(){
	int n,i,j;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
	for(i=0;i<n-1&&b[i]<=b[i+1];i++);
	for(j=i+1;a[j]==b[j]&&j<n;j++);
	if(j==n){
		printf("Insertion Sort\n");
		// InsertSort(b,0,i);
		sort(a,a+i+2);
	}
	else{
		printf("Merge Sort\n");
		// bool step=false;	//找出归并排序到哪一轮
		// int index;	//记录归并排序的间隔
		// for(i=2;i<=n;i*=2){
		// 	for(j=0;j<ceil(n/i);j++){
		// 		for(int k=i*j+1;k<(j+1)*i&&k<n;k++)
		// 			if(b[k]<b[k-1]){
		// 				step=true,index=i;
		// 				break;
		// 			}
		// 		if(step==true) break;	//找到归并排序的间隔
		// 	}
		// 	if(step==true) break;
		// }
		// for(j=0;j<ceil(n/i);j++)
		// 	// for(int k=i*j+1;k<(j+1)*i&&k<n;k++)
		// 		// InsertSort(b,j*i,k);
		// 	sort(b+i*j,b+i*(j+1));
		bool flag2=true;
		j=1;
		while(flag2){
			flag2=false;
			for(i=0;i<n;i++)
				if(a[i]!=b[i]) flag2=true;
			j*=2;
			for(i=0;i<n/j;i++)
				sort(a+i*j,a+(i+1)*j);
			sort(a+i*j,a+n);
		}
	}
	for(j=0;j<n;j++){
		printf("%d",a[j]);
		if(j!=n-1) printf(" ");
	}
	system("pause");
	return 0;
}
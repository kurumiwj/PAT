#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	/*
	int a[10]={0},b[50];	//a为输入的序列0~9个数，b为最小数字
	int n,cnt=0;
	for(int i=0;i<10;i++) scanf("%d",&a[i]),cnt+=a[i];
	for(int i=0;i<cnt;i++){
		for(int j=0;j<10;j++){
			if(a[j]>0&&i!=0){	//若不是首位则把a中最小的数字放入b
				b[i]=j;
				a[j]--;
				break;
			}
			else if(i==0&&a[j]>0&&j>0){	//若是首位则把a中不为0的最小数字放入b
				b[0]=j;
				a[j]--;
				break;
			}
		}
	}
	for(int i=0;i<cnt;i++) printf("%d",b[i]);
	*/
	int count[10];
	for(int i=0;i<10;i++) scanf("%d",&count[i]);
	for(int i=1;i<10;i++)
		if(count[i]>0){
			printf("%d",i);
			count[i]--;
			break;
		}
	for(int i=0;i<10;i++){
		while(count[i]>0){
			printf("%d",i);
			count[i]--;
		}
	}
	system("pause");
	return 0;
}
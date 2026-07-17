#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
const int B=0,C=1,J=2;	//C锤子，J剪刀，B布

int my_ctoi(char c){	//将字符转化为数字
	if(c=='C') return C;
	else if(c=='J') return J;
	else return B;
}

int win_or_lose(int m,int n){	//判断输赢
	if(m==J&&n==B) return m-3-n;
	else if(m==B&&n==J) return m-n+3;
	else return m-n;
}

int main(){
	int pp,qq,n,win1=0,win2=0,even=0;	//记录甲和乙分别赢的次数和平局次数
	char p,q;
	scanf("%d",&n);
	int a[2][3]={0};
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c %c",&p,&q);
		pp=my_ctoi(p),qq=my_ctoi(q);
		if(win_or_lose(pp,qq)<0) win1++,a[0][pp]++;
		else if(win_or_lose(pp,qq)>0) win2++,a[1][qq]++;
		else even++;
	}
	printf("%d %d %d\n",win1,even,win2);
	printf("%d %d %d\n",win2,even,win1);
	for(int i=0;i<2;i++){
		if(a[i][0]>=a[i][1]&&a[i][0]>=a[i][2]) printf("B");
		else if(a[i][1]>a[i][0]&&a[i][1]>=a[i][2]) printf("C");
		else if(a[i][2]>a[i][0]&&a[i][2]>a[i][1]) printf("J");
		if(i==0) printf(" ");
	}
	system("pause");
	return 0;
}
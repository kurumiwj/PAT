#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int c1,c2,tm,hh,mm,ss;
	scanf("%d%d",&c1,&c2);
	tm=(c2-c1+50)/100;
	ss=tm%60,hh=tm/3600,mm=tm%3600/60;
	printf("%02d:%02d:%02d\n",hh,mm,ss);
	system("pause");
	return 0;
}
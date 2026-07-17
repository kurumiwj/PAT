#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	int i=0;
	for(i=0;s[i]!='E';i++);
	string s1=s.substr(1,i-1);	//E前面的部分
	int n=stoi(s.substr(i+1));	//指数部分
	if(s[0]=='-') printf("-");
	if(n<0){
		printf("0.");
		for(int j=0;j<abs(n)-1;j++) printf("0");
		for(int j=0;j<s1.length();j++)
			if(s1[j]!='.') printf("%c",s1[j]);
	}else{
		int j,cnt=0;
		printf("%c",s1[0]);
		for(j=2;cnt<n&&j<s1.length();j++,cnt++) printf("%c",s1[j]);
		if(cnt==n&&j!=s1.length()){	//若刚好到末尾则什么都不输出
			printf(".");
			for(int k=j;k<s1.length();k++) printf("%c",s1[k]);
		}else
			for(int k=0;k<n-cnt;k++) printf("0");
	}
	system("pause");
	return 0;
}
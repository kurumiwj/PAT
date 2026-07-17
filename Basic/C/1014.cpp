#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s1,s2,s3,s4;
	string day[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i,j,cnt=0,a[60]={0};
	char c[5];
	bool flag=false;
	cin>>s1>>s2>>s3>>s4;
	for(i=0;i<s1.length()&&i<s2.length();i++)
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'){
			cout<<day[s1[i]-'A'];
			break;
		}
	for(j=i+1;j<s1.length()&&j<s2.length();j++)
		if(s1[j]==s2[j])
			if(isdigit(s1[j])){
				printf(" %02d:",s1[j]-'0');
				break;
			}
			else if(s1[j]>='A'&&s1[j]<='N'){
				printf(" %02d:",s1[j]-'A'+10);
				break;
			}
	for(i=0;i<s3.length()&&i<s4.length();i++)
		if(s3[i]==s4[i]&&isalpha(s3[i])){
			printf("%02d",i);
			break;
		}
	system("pause");
	return 0;
}
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	int a[10]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]-'0']++;
	}
	for(int i=0;i<=9;i++)
		if(a[i]!=0) printf("%d:%d\n",i,a[i]);
	system("pause");
	return 0;
}
#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(char a,char b){
	return tolower(a)<tolower(b);
}
int main(){
	string s;
	getline(cin,s);
	sort(s.begin(),s.end(),cmp);
	map<char,int> mp;
	int max=0;
	char index;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			char c=tolower(s[i]);
			mp[c]++;
			if(max<mp[c]) index=c,max=mp[c];
		}
	}
	printf("%c %d",index,max);
	system("pause");
	return 0;
}
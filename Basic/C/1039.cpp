#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	map<char,int> mp1;
	int cnt=0;	//记录缺少的珠子
	bool flag=true;
	for(int i=0;i<s1.length();i++) mp1[s1[i]]++;
	for(int i=0;i<s2.length();i++){
		auto it=mp1.find(s2[i]);
		if(it!=mp1.end())	//若找到了目标珠子
			if(it->second>0) it->second--;
			else flag=false,cnt++;	//虽然找到但是珠子不够
		else flag=false,cnt++;	//没找到目标珠子
	}
	if(flag==true) printf("Yes %d",s1.length()-s2.length());
	else printf("No %d",cnt);
	system("pause");
	return 0;
}
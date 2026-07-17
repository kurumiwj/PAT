#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	string s;
	for(int i=0;i<s1.length();i++)
		if(s2.find(s1[i])==string::npos&&s.find(toupper(s1[i]))==string::npos) s+=toupper(s1[i]);
	cout<<s;
	// vector<char> c;
	// for(int i=0,j=0;j<s2.length();)
	// 	if(s1[i]==s2[j]) i++,j++;
	// 	else{
	// 		int k=0;
	// 		for(k=0;k<c.size();k++)	//若已经找到过该坏键则跳过
	// 			if(c[k]==s1[i]||s1[i]>='a'&&s1[i]<='z'&&c[k]==s1[i]-32){
	// 				i++;
	// 				break;
	// 			}
	// 		if(k==c.size())	//若未收录过该坏键则收录
	// 			if(s1[i]>='a'&&s1[i]<='z') c.push_back(s1[i++]-32);
	// 			else c.push_back(s1[i++]);
	// 	}
	// for(auto it=c.begin();it!=c.end();it++) cout<<*it;
	system("pause");
	return 0;
}
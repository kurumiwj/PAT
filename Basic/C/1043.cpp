#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	string check="PATest";
	string s;
	cin>>s;
	map<char,int> mp;
	int total=0,index=0;
	for(int i=0;i<s.length();i++)
		if(check.find(s[i])!=string::npos) total++,mp[s[i]]++;
	for(int i=0;i<total;i++)
		while(true)
			if(mp[check[index]]>0){
				cout<<check[index];
				mp[check[index]]--;
				if(check[index]=='t') index=0;
				else index++;
				break;
			}else{
				if(check[index]=='t') index=0;
				else index++;
			}
	system("pause");
	return 0;
}
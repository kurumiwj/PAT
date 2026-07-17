#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2;
	getline(cin,s1);
	cin>>s2;
	bool flag=false;	//记录是否有换挡键
	if(s1.find('+')!=string::npos) flag=true;
	for(int i=0;i<s2.length();i++){
		if(s1.find(toupper(s2[i]))==string::npos)
			if(isupper(s2[i])&&flag==true) continue;
			else cout<<s2[i];
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int m,n,s;
	scanf("%d%d%d",&m,&n,&s);
	string str[m+1];
	map<string,bool> mp;	//¼ÇÂ¼ÊÇ·ñÖÐ½±
	for(int i=1;i<m+1;i++){
		cin>>str[i];
		mp[str[i]]=false;
	}
	if(s>m) printf("Keep going...");
	else
		for(int i=s;i<=m;){
			if(!mp[str[i]]){
				mp[str[i]]=true;
				cout<<str[i]<<endl;
				i+=n;
			}else{
				i++;
			}
		}
	return 0;
}

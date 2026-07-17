#include <iostream>
#include <string>
using namespace std;

string isLegal(string password){
	bool flag1=true,flag2=true;	//flag1判断是否为纯数字,flag2判断是否为纯字母
	if(password.size()<6) return "is tai duan le.";
	for(int i=0;i<password.size();i++){
		if(!isalnum(password[i])&&password[i]!='.') return "is tai luan le.";
		else if(isalpha(password[i])) flag1=false;	//非纯数字
		else if(isdigit(password[i])) flag2=false;	//非纯字母
	}
	if(flag1) return "needs zi mu.";
	else if(flag2) return "needs shu zi.";
	else return "is wan mei.";
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	string password;
	for(int i=0;i<n;i++){
		getline(cin,password);
		cout<<"Your password "<<isLegal(password)<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string password,tryPwd;
	int n,cnt=0;
	cin>>password>>n;
	bool flag=true;
	getchar();
	while(true){
		getline(cin,tryPwd);
		cnt++;
		if(tryPwd=="#") break;
		if(flag){
			if(tryPwd!=password){
				cout<<"Wrong password: "<<tryPwd<<endl;
				if(cnt==n){
					printf("Account locked");
					flag=false;
				}
			}else{
				printf("Welcome in");
				flag=false;
			}
		}
	}
	return 0;
}

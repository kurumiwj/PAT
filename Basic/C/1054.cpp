#include <iostream>
#include <string>
using namespace std;

bool isNum(string num){
	bool flag=false;
	if(num=="-") return false;
	for(int i=0;i<num.size();i++){
		if(i==0){
			if(!isdigit(num[i])&&num[i]!='-') return false;
		}else{
			if(!isdigit(num[i])&&num[i]!='.') return false;
			else{
				if(num[i]=='.'){
					flag=true;
					if(num.find(".",i+1)!=string::npos){	//出现多个小数点
						return false;
					}
				}
			}
		}
	}
	return true;
}

bool isLegal(string num){
	if(!isNum(num)) return false;
	else{
		int pos=num.find(".");
		int tmp=num.size()-3;
		if(pos==string::npos){	//不是小数
			int tmp=stoi(num);
			if(tmp<-1000||tmp>1000) return false;
		}else if(pos<tmp){
			return false;
		}
	}
	return true;
}

int main(){
	int n,cnt=0;
	double sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		if(!isLegal(tmp)) cout<<"ERROR: "<<tmp<<" is not a legal number"<<endl;
		else{
			cnt++;
			sum+=stod(tmp);
		}
	}
	if(cnt==0) printf("The average of 0 numbers is Undefined");
	else if(cnt==1) printf("The average of 1 number is %.2lf",sum);
	else printf("The average of %d numbers is %.2lf",cnt,sum/cnt);
	return 0;
}

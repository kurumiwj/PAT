#include <iostream>
#include <string>
using namespace std;

int main(){
	int sum=0,cnt0=0,cnt1=0;
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if(isalpha(str[i])){
			int tmp=tolower(str[i])-'a'+1;
			sum+=tmp;
		}
	}
	if(sum==0){
		printf("0 0");
	}else{
		while(sum>0){
			int tmp=sum%2;
			if(tmp==0) cnt0++;
			else cnt1++;
			sum/=2;
		}
		printf("%d %d",cnt0,cnt1);
	}
	return 0;
}

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string compress(string str){
	int start=0,cnt=1;
	string result="";
	for(int i=start+1;i<str.size();i++){
		if(str[i]==str[start]){
			cnt++;
			continue;
		}else{
			if(cnt!=1)
				result+=(to_string(cnt)+str[start]);
			else result+=str[start];
			start=i;
			cnt=1;
		}
	}
	if(cnt>1) result+=(to_string(cnt)+str[start]);	//最后剩一堆
	else if(start==str.size()-1) result+=str[start];	//最后剩一个
	return result;
}

int str_to_num(string str,int start,int end){
	int result=0;
	for(int i=start;i<=end;i++){
		result=result*10+str[i]-'0';
	}
	return result;
}

string decompress(string str){
	int start=0,cnt=0,end=0;
	string result="";
	while(start!=str.size()){
		if(!isdigit(str[start])){
			result+=str[start];
			start++;
		}else{
			for(int i=start+1;i<str.size();i++){
				if(!isdigit(str[i])){
					end=i-1;
					cnt=str_to_num(str,start,end);
					for(int j=0;j<cnt;j++) result+=str[i];
					start=i+1;
					break;
				}
			}
		}
	}
	return result;
}

int main(){
	char c;
	scanf("%c",&c);
	getchar();
	string str;
	getline(cin,str);
	if(c=='C') cout<<compress(str);
	else cout<<decompress(str);
	return 0;
}

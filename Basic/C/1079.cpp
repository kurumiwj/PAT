#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindromic(string str){
	int start=0,end=str.size()-1;
	bool flag=true;
	while(start<=end){
		if(str[start]==str[end]){
			start++,end--;
		}else{
			flag=false;
			break;
		}
	}
	return flag;
}

string add(string a,string b){
	int carry=0,index=a.size()-1;
	string str="";
	while(index>=0){
		int tmp=a[index]-'0'+b[index]-'0'+carry;
		if(tmp>=10){
			carry=1;
			tmp%=10;
		}else carry=0;
		str+=to_string(tmp);
		index--;
	}
	if(carry==1) str+="1";
	reverse(str.begin(),str.end());
	return str;
}

int main(){
	string str,str2,sum;
	cin>>str;
	int cnt=10;
	if(isPalindromic(str)) cout<<str<<" is a palindromic number.";
	else{
		while(cnt>0){
			str2=str;
			reverse(str2.begin(),str2.end());
			sum=add(str,str2);
			cout<<str<<" + "<<str2<<" = "<<sum<<endl;
			str=sum;
			if(isPalindromic(str)){
				cout<<str<<" is a palindromic number.";
				break;
			}
			cnt--;
		}
		if(cnt==0) printf("Not found in 10 iterations.");
	}
	return 0;
}

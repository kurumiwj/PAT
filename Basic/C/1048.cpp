#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int i,j,cnt=1,len=max(a.length(),b.length()),n=len-1;	//cnt记录奇数位还是偶数位
	char c[len];
	char mp[3]={'J','Q','K'};
	for(i=a.length()-1,j=b.length()-1;i>=0&&j>=0;i--,j--,cnt++){
		int m;
		if(cnt%2!=0){
			m=(a[i]-'0'+b[j]-'0')%13;
			if(m<10) c[n--]=m+'0';
			else c[n--]=mp[m-10];
		}
		else{
			m=b[j]-a[i];
			if(m<0) c[n--]=m+10+'0';
			else c[n--]=m+'0';
		}
	}
	if(j>0) for(int k=j;k>=0;k--) c[n--]=b[k];	//B比A长把B多的直接输出即可
	if(i>0)	//A比B长，B高位补0继续运算
		for(int k=i;k>=0;k--){
			int m;
			if(cnt%2!=0){
				m=(a[k]-'0')%13;
				if(m<10) c[n--]=m+'0';
				else c[n--]=mp[m-10];
			}
			else{
				m='0'-a[k];
				if(m<0) c[n--]=m+10+'0';
				else c[n--]=m+'0';
			}
			cnt++;
		}
	for(int i=0;i<len;i++) printf("%c",c[i]);
	system("pause");
	return 0;
}
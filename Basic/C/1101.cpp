#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,d;
	scanf("%d %d",&a,&d);
	string str=to_string(a);
	string str2=str.substr(str.length()-d)+str.substr(0,str.length()-d);
	int b=stoi(str2);
	printf("%.2lf",b*1.0/a);
	return 0;
}
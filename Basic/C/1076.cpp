#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string password="";
	scanf("%d",&n);
	getchar();
	char opt,ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			scanf("%c-%c",&opt,&ans);
			getchar();
			if(ans=='T') password+=to_string(opt+1-'A');
		}
	}
	cout<<password;
	return 0;
}

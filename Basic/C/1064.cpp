#include <iostream>
using namespace std;

int friendId(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n,tmp,cnt=0;
	scanf("%d",&n);
	bool flag[40]={false};
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		if(!flag[friendId(tmp)]) cnt++;
		flag[friendId(tmp)]=true;
	}
	printf("%d\n",cnt);
	bool start=false;
	for(int i=0;i<40;i++){
		if(flag[i]){
			cnt++;
			if(start) printf(" ");
			else start=true;
			printf("%d",i);
		}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int T,K,n1,b,t,n2;
	scanf("%d%d",&T,&K);
	for(int i=0;i<K;i++){
		scanf("%d%d%d%d",&n1,&b,&t,&n2);
		if(T<t){
			printf("Not enough tokens.  Total = %d.\n",T);
		}else{
			if(n2>n1&&b==1||n2<n1&&b==0){
				T+=t;
				printf("Win %d!  Total = %d.\n",t,T);
			}else{
				T-=t;
				printf("Lose %d.  Total = %d.\n",t,T);
			}
		}
		if(T==0){
			printf("Game Over.\n");
			break;
		}
	}
	return 0;
}

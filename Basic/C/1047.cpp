#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	map<int,int> mp;
	int max=0,index;
	for(int i=0;i<n;i++){
		int single_id,team_id,score;
		scanf("%d-%d %d",&team_id,&single_id,&score);
		mp[team_id]+=score;
		if(max<mp[team_id]) index=team_id,max=mp[index];
	}
	printf("%d %d",index,max);
	system("pause");
	return 0;
}
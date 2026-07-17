#include <iostream>
#include <math.h>
#include <map>
using namespace std;

int main(){
	int m,n,tol,cnt=0;	//m列n行
	scanf("%d%d%d",&m,&n,&tol);
	int a[n][m]={-1};
	bool isExist[n][m]={true};
	map<int,int> mp;	//记录每个像素出现的次数
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) isExist[i][j]=true;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			mp[a[i][j]]++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[a[i][j]]>1) isExist[i][j]=false;
			else if(isExist[i][j]){
				bool flag=true;
				for(int k=i-1;k<=i+1;k++){	//邻近8个数
					if(k<0||k>n-1) continue;
					for(int g=j-1;g<=j+1;g++){
						if(g<0||g>m-1) continue;
						if(i!=k||j!=g){
							int tmp=abs(a[i][j]-a[k][g]);
							if(tmp<=tol){
								flag=false;
								isExist[i][j]=false;
								isExist[k][g]=false;
							}
						}
					}
				}
				if(flag) cnt++;
			}
		}
	}
	if(cnt==0) printf("Not Exist");
	else if(cnt>1) printf("Not Unique");
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(isExist[i][j]) printf("(%d, %d): %d",j+1,i+1,a[i][j]);
			}
		}
	}
	return 0;
}

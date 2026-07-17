#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector <vector<string>>face(3);	//0是手，1是眼，2是口
	for(int i=0;i<3;i++){
		string line,tmp;
		getline(cin,line);
		for(int j=0;j<line.length();j++){
			if(line[j]=='['){
				tmp="";
			}else if(line[j]!=']'){
				tmp+=line[j];
			}else if(line[j]==']'){
				face[i].push_back(tmp);
			}else if(line[j]==' '){
				continue;
			}
		}
	}
	int cnt;
	int a[5];
	scanf("%d",&cnt);
	for(int i=0;i<cnt;i++){
		fill(a,a+5,0);
		int tmp,j=0,k=0;
		bool flag=true;
		for(k=0;k<5;k++){
			scanf("%d",&a[k]);
			if(flag)
				if(a[k]<=0||((k==0||k==4)&&(a[k]>face[0].size()))||((k==1||k==3)&&(a[k]>face[1].size()))||(a[2]>face[2].size()))
					flag=false;
		}
		if(!flag){
			printf("Are you kidding me? @\\/@");
		}else{
			while(j<5){
				if(j==0||j==4){	//手
					cout<<face[0][a[j]-1];
				}else if(j==1||j==3){	//眼
					if(j==1) printf("(");
					cout<<face[1][a[j]-1];
					if(j==3) printf(")");
				}else{
					cout<<face[2][a[j]-1];
				}
				j++;
			}
		}
		if(i!=cnt-1) printf("\n");
	}
	system("pause");
	return 0;
}

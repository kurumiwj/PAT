#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double dist(int x,int y){
	return sqrt(pow(x,2)+pow(y,2));
}

int main(){
	int n,x,y;
	double Max=-1,Min=10000,dis;
	string id,MaxId,MinId;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>id;
		scanf("%d%d",&x,&y);
		double tmp=dist(x,y);
		if(tmp>Max){
			Max=tmp;
			MaxId=id;
		}
		if(tmp<Min){
			Min=tmp;
			MinId=id;
		}
	}
	cout<<MinId<<" "<<MaxId;
	return 0;
}

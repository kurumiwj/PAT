#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> fact;	//存放因子和四个因子的和
set<int> fourSum;
void totalFact(int n);
void fourNumSum(int sum,int total,vector<int> v);

bool isBigBeauty(int n){
	fact.clear();	//初始化
	fourSum.clear();
	totalFact(n);
	fourNumSum(0,1,fact);
	for(auto it:fourSum)
		if(it%n==0) return true;
	return false;
}

void fourNumSum(int sum,int total,vector<int> v){	//求四个因数的和
	if(total>4) return;	//超过四个因子
	for(int i=0;i<v.size();i++){
		if(total==4){
			fourSum.insert(sum+v[i]);
		}
		vector<int> v0=v;
		v0.erase(v0.begin()+i);
		fourNumSum(sum+v[i],total+1,v0);
	}
}

void totalFact(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0) fact.push_back(i);
	}
}

int main(){
	int k,tmp;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&tmp);
		if(isBigBeauty(tmp))
			printf("Yes\n");
		else
			printf("No\n");
	}
	system("pause");
	return 0;
}
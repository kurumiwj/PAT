#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

struct person{
	string name;
	int year,month,day;
};

bool cmp(person a,person b){
	if(a.year==b.year)
		if(a.month==b.month) return a.day<b.day;
		else return a.month<b.month;
	else return a.year<b.year;
}
int main(){
	int cnt=0,n;
	scanf("%d",&n);
	person p[n];
	for(int i=0;i<n;i++){
		string name;
		int yy,mm,dd;
		cin>>name;
		scanf("%d/%d/%d",&yy,&mm,&dd);
		if(yy>2014||yy<1814) continue;
		else if(yy==2014&&(mm>9||mm==9&&dd>6)) continue;
		else if(yy==1814&&(mm<9||mm==9&&dd<6)) continue;
		else{
			p[cnt].name=name,p[cnt].year=yy,p[cnt].month=mm,p[cnt].day=dd;
			cnt++;
		}
	}
	sort(p,p+cnt,cmp);
	if(cnt==0) printf("0\n");
	else{
		printf("%d ",cnt);
		cout<<p[0].name<<" "<<p[cnt-1].name<<endl;
	}
	system("pause");
	return 0;
}
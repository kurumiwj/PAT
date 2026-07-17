#include <iostream>
#include <string>
using namespace std;

string marsLow[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string marsHigh[13]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
int findHighIndex(string n){
	int index=-1;
	for(int i=0;i<13;i++)
		if(marsHigh[i]==n){
			index=i;
			break;
		}
	return index;
}
int findLowIndex(string n){
	int index=-1;
	for(int i=0;i<13;i++)
		if(marsLow[i]==n){
			index=i;
			break;
		}
	return index;
}
int main(){
	int n;
	scanf("%d",&n);
	cin.ignore();
	for(int i=0;i<n;i++){
		string num;
		getline(cin,num);
		if(num[0]>='0'&&num[0]<='9'){	//若第一个字符是数字则一定是地球文，否则为火星文
			int num2=stoi(num);
			if(num2/13==0) cout<<marsLow[num2%13]<<endl;
			else{
				cout<<marsHigh[num2/13];
				if(num2%13!=0) cout<<" "<<marsLow[num2%13];
				cout<<endl;
			}
		}else{
			int blank=num.find(" ");
			if(blank!=string::npos){	//找到空格分成两个字符串
				string numHigh=num.substr(0,3),numLow=num.substr(4,7);
				int high=findHighIndex(numHigh),low=findLowIndex(numLow);
				printf("%d\n",high*13+low);
			}else{
				int high=findHighIndex(num);
				if(high!=-1) printf("%d\n",high*13);
				else printf("%d\n",findLowIndex(num));
			}
		}
	}
	system("pause");
	return 0;
}
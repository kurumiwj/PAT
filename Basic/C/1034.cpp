#include <iostream>
using namespace std;

long long gcd(long long a,long long b){
	return b==0?a:gcd(b,a%b);
}
// void rationalOperator(long long a,long long b){
// 	if(a==0) printf("0");	//若分子为0
// 	else if(a>0&&b>0||a<0&&b<0)	//最终结果为正
// 		if(abs(a)/abs(b)!=0)	//分子大于分母
// 			if(abs(a)%abs(b)!=0) printf("%lld %lld/%lld",abs(a)/abs(b),abs(a)%abs(b),abs(b));
// 			else printf("%lld",abs(a)/abs(b));	//分子刚好是分母的倍数
// 		else printf("%lld/%lld",abs(a),abs(b));	//分子小于分母直接输出
// 	else	//结果为负
// 		if(abs(a)/abs(b)!=0)
// 			if(abs(a)%abs(b)!=0) printf("(-%lld %lld/%lld) ",abs(a)/abs(b),abs(a)%abs(b),abs(b));
// 			else printf("(-%lld)",abs(a)/abs(b));
// 		else printf("(-%lld/%lld)",abs(a),abs(b));
// }
// int main(){
// 	long long a1,b1,a2,b2,c,d;
// 	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
// 	a1/=gcd(a1,b1),b1/=gcd(a1,b1),a2/=gcd(a2,b2),b2/=gcd(a2,b2);
// 	rationalOperator(a1,b1),printf(" + "),rationalOperator(a2,b2),printf(" = "),rationalOperator((a1*b2+b1*a2)/gcd(a1*b2+b1*a2,b1*b2),b1*b2/gcd(a1*b2+b1*a2,b1*b2)),printf("\n");
// 	rationalOperator(a1,b1),printf(" - "),rationalOperator(a2,b2),printf(" = "),rationalOperator((a1*b2-b1*a2)/gcd(a1*b2-b1*a2,b1*b2),b1*b2/gcd(a1*b2-b1*a2,b1*b2)),printf("\n");
// 	rationalOperator(a1,b1),printf(" * "),rationalOperator(a2,b2),printf(" = "),rationalOperator(a1*a2/gcd(a1*a2,b1*b2),b1*b2/gcd(a1*a2,b1*b2)),printf("\n");
// 	rationalOperator(a1,b1),printf(" / "),rationalOperator(a2,b2),printf(" = ");
// 	if(a2==0) printf("Inf\n");
// 	else rationalOperator(a1*b2/gcd(a1*b2,b1*a2),b1*a2/gcd(a1*b2,b1*a2)),printf("\n");
// 	system("pause");
// 	return 0;
// }

void func(long long m, long long n);

int main() {
    long long a1, b1, a2, b2;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);       //题目已经说明两个分数都是最简形式所以不用再化简
    //加法
    func(a1, b1), printf(" + "), func(a2, b2), printf(" = "), func(a1 * b2 + a2 * b1, b1 * b2);
    printf("\n");
    //减法
    func(a1, b1), printf(" - "), func(a2, b2), printf(" = "), func(a1 * b2 - a2 * b1, b1 * b2);
    printf("\n");
    //乘法
    func(a1, b1), printf(" * "), func(a2, b2), printf(" = "), func(a1 * a2, b1 * b2);
    printf("\n");
    //除法(题目中已经说明给出的两个分数分母都不为0,只需考虑最后结果分母是否有0即可)
    func(a1, b1), printf(" / "), func(a2, b2), printf(" = "), func(a1 * b2, b1 * a2);
    printf("\n");
    system("pause");
    return 0;
}

void func(long long m, long long n) {
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    bool flag = ((m > 0 && n < 0) || (m < 0 && n > 0));
    m = abs(m), n = abs(n);
    long long integer = m / n, gcdvalue;
    printf("%s", flag ? "(-" : "");
    if (integer != 0)printf("%lld", integer);
    if (m % n == 0) {     //如果分子刚好可以整除分母则只有整数部分没有分数部分
        printf("%s", flag ? ")" : "");
        return;
    }
    if (integer != 0)printf(" ");
    m -= integer * n;
    gcdvalue = gcd(m, n);
    m /= gcdvalue, n /= gcdvalue;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}
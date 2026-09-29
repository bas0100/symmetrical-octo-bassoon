//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	printf("计算1^1+2^2+3^3+……+n^n\n");
//	printf("请输入n = ");
//	int n;
//	long long temp= 1;
//	long long rev = 0;
//	scanf("%d", &n);
//	for (int a=1; a<=n;a++)//执行n次内循环
//	{//初始a = 1，a来计算
//		for (int i = 1;i <= a;i++)//数字a，循环a次，每次乘以a  temp=1,temp*=i
//		{
//			temp *=(long long) a;
//		}
//		rev += temp;
//		temp = 1;//temp清零
//	}
//	printf("结果是%lld",rev);
//	return 0;
//}
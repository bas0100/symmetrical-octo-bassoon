//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {//统计n以内所有质数数量
//	int n;
//	int count = 0;
//	int temp = 0;
//	int rev = 0;
//	printf("请输入整数n，计算n以内质数的数量\n");
//	scanf("%d",&n);//赋值n
//	for (int i = 2;i<=n;i++)
//	{
//		temp = i;//temp代替i计算
//		for (int j = 1;j <= n;j++)
//		{
//			temp = i;
//			if (i < j)
//			{//i%j，若i<j就结束循环
//				break;
//			}
//			temp %= j;   //质数除了1和本身，除不尽任何数
//			if (temp == 0) {//如果能除尽，就计1，最后是2
//				count ++;
//			}
//		}
//		if (count == 2) //如果count是2，就说明只有1和本身的因数，是质数
//		{
//			rev++;//计1
//		}
//		count = 0;//每次判断完i之后记得给count清零，确保每次运行count都是0
//	}
//	printf("n以内一共有%d个质数",rev);
//	return 0;
//}
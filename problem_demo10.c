#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {//找出1000内，符合要求的数字，要求：每一位数字的和是15
	//获得1到1000
	int temp;
		int rev = 0;
	for (int a = 1; a<= 1000;a++)
	{//取得a的每一位数
		temp = a;
		rev = 0;
		while (temp!=0)
		{
			rev += temp % 10;
			temp /= 10;	//temp记得写成赋值
		}
		if (rev == 15)//==是判断，=是 赋值
		{
			printf("%d ", a);//输出数字a
		}
		
	}

	return 0;
}
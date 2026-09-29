//#include <stdio.h>
//int main() {
//	for (int i = 1,b=5;i <= 5;i++)
//	{
//		for (int a = 1;a <= b;a++)//内部for打印*了b次，该代码执行i（5）次 
//		{                         //外部，每次内部for执行完b-1
//			printf("*");
//		}
//		printf("\n");
//		b--;
//	}
//	for (int i = 1,b = 1;i <= 5;i++)
//	{
//		for (int a = 1;a <= b;a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		b++;
//	}
//	return 0;
//}
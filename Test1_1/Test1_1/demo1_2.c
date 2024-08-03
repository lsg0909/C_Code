#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int line = 0;
//	printf("加入牛马\n");
//
//	while (line < 100)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//
//	if (line >= 100)
//	{
//		printf("初出茅庐\n");
//	}
//	else
//	{
//		printf("加油!\n");
//	}
//
//	return 0;
//}

////函数
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2); //在原文件的第一行放：#define _CRT_SECURE_NO_WARNINGS
//
//	//求和
//	int sum = Add(num1,num2);
//
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 }; //数组 下标从0开始的
	char ch[5];
	double d[30];

	//printf("%d\n", arr[8]);

	int i = 0;
	
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		
		i += 1;
	}

	return 0;
}
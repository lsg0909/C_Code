#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int line = 0;
//	printf("����ţ��\n");
//
//	while (line < 100)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//
//	if (line >= 100)
//	{
//		printf("����é®\n");
//	}
//	else
//	{
//		printf("����!\n");
//	}
//
//	return 0;
//}

////����
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
//	//������������
//	scanf("%d %d", &num1, &num2); //��ԭ�ļ��ĵ�һ�зţ�#define _CRT_SECURE_NO_WARNINGS
//
//	//���
//	int sum = Add(num1,num2);
//
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 }; //���� �±��0��ʼ��
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("%zu\n", sizeof(char)); //zu:��ӡsizeof����һ���޷�������
//	printf("%zu\n", sizeof(short)); //C���Թ涨��siziof��long��>= sizeof��int��
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//
//	printf("%d\n", age);
//	printf("%.2f\n", price);
//
//	return 0;
//}

//�����������ĺ�
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	//������������
//	scanf("%d %d", &num1, &num2); //��ԭ�ļ��ĵ�һ�зţ�#define _CRT_SECURE_NO_WARNINGS
//
//	//���
//	int sum = num2 + num1;
//
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}

//���������ⲿ�ķ���,��ʱ��a��ȫ�ֱ���
//extern int a; �������ڣ������������������
//
//void test()
//{
//	printf("test--->%d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		int a = 20;
//		printf("%d:��ʱ��a�Ǿֲ�����\n", a); �������ڣ��ӽ����������������ڿ�ʼ���뿪�������������ڽ���
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//����
//#define MAX 100      //define ������ı�ʶ������
//#define STR "abcdef"
////ö�ٳ���
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	3.14;  //���泣��
//	const int a = 10 ; //����������C�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
//	int b = MAX;
//	enum Color c = RED;
//
//	printf("%d\n", a);
//	printf("%d\n", MAX);
//	printf("%d\n", b);
//	printf("%s\n", STR);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abcdef"; //�ַ����Ľ�����־��һ�� "\0"��ת���ַ�
//	char arr2[] = { 'a','b','c','d','e','f'};//����"\0"
//
//	int len = strlen("abc");//���ַ������ȵ�һ������ д��ͷ�ļ� string.h
//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//ת���ַ�
//����ĸ�� : ??) --> ] ; ??( --> [

//int main()
//{
	//printf("%c\n", '\'');    //  \': ���ڱ�ʾ�ַ����� ��
	//printf("%c\n", "\"");    //  \": ���ڱ�ʾ�ַ����� "
	//printf("\\n");		   //  \\:���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
	//printf("\a");            //  \a:�����ַ�������
	//printf("%c\n",'\130');   //  \ddd:ddd��ʾ1~3���˽��Ƶ����֡���:\130
	//printf("%c\n",'\x30');   //  \xdd:dd��ʾ2��ʮ���������֡���:\x30
	//printf("%d\n", strlen("c:\test\628\test.c"));

//	return 0;
//}

//ע��
//int main()
//{
//	
//	/*   
//	ΪC����ע�ͷ��
//	int a = 10 ;
//	int b = 20 ;
//	*/
//
//	//����ָ�����p������ֵΪnull   //ΪC++ע�ͷ��
//	int* p = NULL;
//
//	return 0;
//}




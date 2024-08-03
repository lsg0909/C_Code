#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("%zu\n", sizeof(char)); //zu:打印sizeof返回一个无符号整型
//	printf("%zu\n", sizeof(short)); //C语言规定：siziof（long）>= sizeof（int）
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

//计算两个数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2); //在原文件的第一行放：#define _CRT_SECURE_NO_WARNINGS
//
//	//求和
//	int sum = num2 + num1;
//
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

//声明来自外部的符号,此时的a是全局变量
//extern int a; 生命周期：整个程序的生命周期
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
//		printf("%d:此时的a是局部变量\n", a); 生命周期：从进入作用域生命周期开始，离开作用与生命周期结束
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//常量
//#define MAX 100      //define ：定义的标识符常量
//#define STR "abcdef"
////枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	3.14;  //字面常量
//	const int a = 10 ; //常变量：在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性。
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
//	char arr1[] = "abcdef"; //字符串的结束标志是一个 "\0"的转义字符
//	char arr2[] = { 'a','b','c','d','e','f'};//不含"\0"
//
//	int len = strlen("abc");//求字符串长度的一个函数 写入头文件 string.h
//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符
//三字母词 : ??) --> ] ; ??( --> [

//int main()
//{
	//printf("%c\n", '\'');    //  \': 用于表示字符常量 ’
	//printf("%c\n", "\"");    //  \": 用于表示字符常量 "
	//printf("\\n");		   //  \\:用于表示一个反斜杠，防止它被解释为一个转义序列符
	//printf("\a");            //  \a:警告字符，蜂鸣
	//printf("%c\n",'\130');   //  \ddd:ddd表示1~3个八进制的数字。如:\130
	//printf("%c\n",'\x30');   //  \xdd:dd表示2个十六进制数字。如:\x30
	//printf("%d\n", strlen("c:\test\628\test.c"));

//	return 0;
//}

//注释
//int main()
//{
//	
//	/*   
//	为C语言注释风格
//	int a = 10 ;
//	int b = 20 ;
//	*/
//
//	//创建指针变量p，并赋值为null   //为C++注释风格
//	int* p = NULL;
//
//	return 0;
//}




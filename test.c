#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入
//	scanf("%zu %zu", & num1, &num2);
//	int sum = num1 + num2;
//	//输出
//	printf("%zu\n", sum);
//	return 0;
//}
   //变量的作用域
//1.全局变量
//任意位置都可以使用
//2局部变量
//局部可以用

//
//int a = 10;
//void test()
//{
//	printf("test-->%zu\n", a); 
//}
//int main()
//{
//	test();
//	{
//		
//		printf("a=%zu\n", a);
//		printf("a=%zu\n", a);
//	}
//	
//	return 0;
//}

//int main()
//{
//	/*8;
//	3.14;
//	'm';
//	"abc";*/
//	const int a = 10;
//	/*a = 20;*///运行a被修改，const修饰的a本质是变量，
//	      //但是不能直接修改，有变量的属行
//	return 0;

//
//#define MAX 100   //#define定义标识符常量
//#define STR "abcdef"  
//int main()
//
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%c\n", a);
//	printf("%s\n", STR);
//	char arr1[] = { 'a','b','c','\0' };
//	printf("%s", arr1);
//	/* %s 用来打印字符号 string*/
//	return 0;
//}
//} 
//int main()
//{
//	char arr[] = { 'a','b','c','\0'};
//	printf("%s", arr);
//	return 0;
//////
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}
#include <string.h>
int main()
{
	int len = strlen("abc");//string length求字符串长度
	//'\0'是字符串的结束标志strlen在求字符串长度的时候统计的是\0之前字符串个数

	printf("%d\n", len);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//����
//	scanf("%zu %zu", & num1, &num2);
//	int sum = num1 + num2;
//	//���
//	printf("%zu\n", sum);
//	return 0;
//}
   //������������
//1.ȫ�ֱ���
//����λ�ö�����ʹ��
//2�ֲ�����
//�ֲ�������

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
//	/*a = 20;*///����a���޸ģ�const���ε�a�����Ǳ�����
//	      //���ǲ���ֱ���޸ģ��б���������
//	return 0;

//
//#define MAX 100   //#define�����ʶ������
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
//	/* %s ������ӡ�ַ��� string*/
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
	int len = strlen("abc");//string length���ַ�������
	//'\0'���ַ����Ľ�����־strlen�����ַ������ȵ�ʱ��ͳ�Ƶ���\0֮ǰ�ַ�������

	printf("%d\n", len);
	
	return 0;
}
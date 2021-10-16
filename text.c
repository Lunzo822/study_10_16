#include<stdio.h>
#include "add.h"		//包含函数声明，自定义函数用双引号（"头文件"）包含
#include "print.h"
#include "my_strlen.h"

//不创建临时变量，求字符串的长度
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);		//可以用strlen函数求
	//printf("%d\n",len);

	//自定义求长度的函数
	int len = my_strlen(arr);
	//arr是数组，数组传参时，传过去的不是整个数组，而是第一个元素的地址
	//所以需要指针变量来实现
	printf("%d\n",len);

	return 0;
}



////接受一个无符号整型数，按照顺序打印每一位
//int main ()
//{
//	int num = 0;
//	scanf("%d",&num);
//	//递归
//	print(num);
//
//	return 0;
//}


//两数相加
//函数声明
//int main()
//{
//	int a,b = 0;
//	scanf("%d%d",&a,&b);
//	printf("sum = %d\n",Add(a,b));
//
//	return 0;
//}




////链式访问
//int main ()
//{
//	printf("%d",printf("%d",printf("%d",43)));		//43 - 2 - 1
//	//printf()函数的返回值是字符的个数
//
//	return 0;
//}



////自定义函数
////写一个函数，每调用一次这个函数，就会将num的值加1
//void Sum(int* p)
//{
//	(*p) ++;
//}
//int main()
//{
//	int num,i,n = 0;
//	printf("请输入：num = " );
//	scanf("%d",&num);
//	printf("请输入：n = " );
//	scanf("%d",&n);
//	for(i = 0;i<n;i++)
//	{
//		Sum(&num);
//		printf("第%d次	num = %d\n",i+1,num);
//	}
//
//	return 0;
//}